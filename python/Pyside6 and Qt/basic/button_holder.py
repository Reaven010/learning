from PySide6.QtWidgets import QMainWindow,QPushButton
class ButtonHolder(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("Button Holder")
        
        button=QPushButton("Click Me")
        button.setCheckable(True)
        # set button as central widget
        self.setCentralWidget(button)
        button.clicked.connect(self.button_clicked)
    def button_clicked(self,data):
        print(f"Button was clicked! checked:{data}")