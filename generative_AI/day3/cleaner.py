import re
import os

def clean_whatsapp_chat(input_path, output_path, original_name=None, new_name=None):
    """
    Reads a WhatsApp chat file, removes date/time stamps, optionally renames a sender,
    and writes the cleaned content to a new file.

    Args:
        input_path (str): The path to the input WhatsApp chat file.
        output_path (str): The path where the cleaned chat file will be saved.
        original_name (str, optional): The sender's name to be replaced. Defaults to None.
        new_name (str, optional): The new name for the sender. Defaults to None.
    """
    # This regex is designed to find the typical date/time formats at the start of a line
    # in an exported WhatsApp chat. It covers formats like:
    # "M/D/YY, H:MM - "
    # "M/D/YYYY, H:MM - "
    # "[M/D/YY, H:MM:SS AM/PM] "
    # "[DD/MM/YYYY, HH:MM:SS] "
    # The `^` ensures we only match at the very beginning of a line.
    timestamp_regex = r"^\[?(\d{1,2}[/-]\d{1,2}[/-]\d{2,4}),?\s\d{1,2}:\d{2}(?::\d{2})?\s?(?:AM|PM)?\]?\s-\s"

    print(f"Reading from: {input_path}")
    print(f"Writing to: {output_path}")

    cleaned_lines = 0
    renamed_lines = 0
    try:
        with open(input_path, 'r', encoding='utf-8') as infile, \
             open(output_path, 'w', encoding='utf-8') as outfile:

            for line in infile:
                # 1. Remove the timestamp
                cleaned_line = re.sub(timestamp_regex, '', line)
                
                # Check if a timestamp was removed
                if line != cleaned_line:
                    cleaned_lines += 1
                
                # 2. Rename the sender if requested
                if original_name and new_name and cleaned_line.startswith(original_name + ":"):
                    # Replace only the first occurrence to avoid changing the message content
                    cleaned_line = cleaned_line.replace(f"{original_name}:", f"{new_name}:", 1)
                    renamed_lines += 1

                outfile.write(cleaned_line)

        print("\n--- Success! ---")
        print(f"Chat cleaning complete. Removed timestamps from {cleaned_lines} message lines.")
        if renamed_lines > 0:
            print(f"Renamed '{original_name}' to '{new_name}' in {renamed_lines} lines.")
        print(f"The cleaned file has been saved as '{output_path}'")

    except FileNotFoundError:
        print(f"\n--- Error ---")
        print(f"The file '{input_path}' was not found.")
        print("Please make sure the file is in the same directory as the script,")
        print("or provide the full path to the file.")
    except Exception as e:
        print(f"\n--- An unexpected error occurred ---")
        print(f"Error: {e}")

if __name__ == "__main__":
    print("--- WhatsApp Chat Date & Time Remover ---")
    print("This script will remove timestamps and can optionally rename senders.")
    
    # Get the input file path from the user.
    input_file = "learning\generative_AI\WhatsApp Chat with Nitya.txt"

    # Create a default output file name based on the input file.
    if '.' in input_file:
        base_name, extension = input_file.rsplit('.', 1)
        default_output_file = f"{base_name}_cleaned.{extension}"
    else:
        default_output_file = f"{input_file}_cleaned.txt"

    # Get the desired output file path from the user.
    output_file = "learning\generative_AI\clean.txt"
    if not output_file:
        output_file = default_output_file

    # Ask the user if they want to rename a sender
    rename_choice = "yes"
    original_sender = None
    new_sender = None
    if rename_choice in ['yes', 'y']:
        original_sender = "tiwari"
        new_sender = "t"
    print("-" * 30)
    clean_whatsapp_chat(input_file, output_file, original_sender, new_sender)

