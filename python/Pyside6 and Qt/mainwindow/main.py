from PySide6.QtWidgets import QApplication
from mainwindow import MainWindow
import sys

app=QApplication(sys.argv)
window=MainWindow(app)
window.resize(500,500)
window.show()
app.exec()