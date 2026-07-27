from PySide6.QtWidgets import QApplication,QMainWindow
class MainWindow(QMainWindow):
    def __init__(self,app):
        super().__init__()
        self.app=app
        self.setWindowTitle("Main Window")

        # menubar and menu
        menu_bar=self.menuBar()
        file_menu=menu_bar.addMenu("File")
        edit_menu=menu_bar.addMenu("Edit")

        # actions of file menu
        new_action=file_menu.addAction("New")
        new_action.triggered.connect(self.new_action_triggered)

        quit_action=file_menu.addAction("Quit")
        quit_action.triggered.connect(self.quit_action_triggered)

        #actions 
        copy_action=edit_menu.addAction("Copy")
        copy_action.triggered.connect(self.copy_action_triggered)

    # triggers
    def new_action_triggered(self):
        print ("new acton tiggered")
    def quit_action_triggered(self):
        self.app.quit()
        print("Quit action triggered")
    def copy_action_triggered(self):
        print("Copy action triggered")