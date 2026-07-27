# import component needed

from PySide6.QtWidgets import  QApplication
import sys
from button_holder import ButtonHolder
# create an instance of QApplication
app=QApplication(sys.argv)
window=ButtonHolder()
window.show()
app.exec()
