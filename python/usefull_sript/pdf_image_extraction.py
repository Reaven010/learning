import fitz  # PyMuPDF
import os

def convert_pdf_to_images(pdf_path, output_folder=None):
    """
    Converts each page of a PDF document into an image.

    :param pdf_path: The full path to the PDF file.
    :param output_folder: The folder to save the images in. 
                          If None, a folder with the PDF's name is created.
    """
    # Create the output folder if it doesn't exist
    if output_folder is None:
        # Get the base name of the pdf and create a directory for the images
        output_folder = os.path.splitext(os.path.basename(pdf_path))[0]
    
    if not os.path.exists(output_folder):
        os.makedirs(output_folder)

    # Open the PDF file
    try:
        doc = fitz.open(pdf_path)
    except Exception as e:
        print(f"Error opening PDF file: {e}")
        return

    print(f"Converting '{pdf_path}' to images...")

    # Iterate through each page of the PDF
    for page_num in range(len(doc)):
        # Get the page object
        page = doc.load_page(page_num)
        
        # Render the page to a pixmap (an image object)
        # The dpi (dots per inch) parameter controls the image resolution.
        # Higher DPI means better quality and larger file size. 300 is good for high quality.
        pix = page.get_pixmap(dpi=300)
        
        # Define the output image path
        output_image_path = os.path.join(output_folder, f"page_{page_num + 1}.png")
        
        # Save the pixmap as a PNG file
        pix.save(output_image_path)
        
        print(f"  - Saved page {page_num + 1} to '{output_image_path}'")

    # Close the document
    doc.close()
    print("Conversion complete! ✨")


# --- Main execution block ---
if __name__ == "__main__":
    # Replace 'your_document.pdf' with the path to your PDF file
    pdf_file = "learning/python/usefull_sript/INTERNET-merged.pdf"

    if os.path.exists(pdf_file):
        convert_pdf_to_images(pdf_file)
    else:
        print(f"Error: The file '{pdf_file}' was not found.")
        print("Please place your PDF in the same directory as the script or provide the full path.")