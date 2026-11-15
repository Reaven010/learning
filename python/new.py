import os

def manage_directory () :
    """ Complete directory management example """

    # 1. Create directories
    os . makedirs ('project/data')
    print ("1. Created project/data directory ")
        
    # 2. Change to new directory
    os . chdir ('project')
    print ( f"2. Changed to: {os. getcwd ()}")
    # 3. Create subdirectories
    os . mkdir ('backup')
    os . mkdir ('output')
    print ("3. Created backup and output directories ")

    # 4. List contents
    content = os . listdir ('.')
    print ( f"4. Contents : { content }")

    # 5. Rename directory
    os . rename ('output ', 'results ')
    print ("5. Renamed output to results ")
    # 6. Remove directory (if empty )
    os . rmdir ('backup ')
    print ("6. Removed backup directory ")


manage_directory()