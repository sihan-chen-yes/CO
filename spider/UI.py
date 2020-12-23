import sys
import xlrd
from PyQt5.QtWidgets import QApplication, QMainWindow
import pic
from functools import partial
from PyQt5 import QtCore, QtGui, QtWidgets
import UIdesign
import read
col = ("电影详情链接", "图片链接", "影片中文名", "影片外国名", "影片评分", "影片评价人数", "影片概况", "影片内容")

def get_key(dict, value):
    return [k for (k, v) in dict.items() if v == value]

def rank_search(ui,bptree):
    input = ui.rank_line.text()
    num = int(input)
    xls_path = bptree.search(num).value[0]
    pic_path = bptree.search(num).value[1]
    info = read.readData(xls_path)
    for i in range(len(info)):
        UIdesign.Ui_MainWindow.printf(ui,col[i] + ':' + info[i]+'\n')
    pixmap = QtGui.QPixmap(pic_path)
    UIdesign.Ui_MainWindow.show_picture(ui,pixmap)

def name_search(ui,bptree,dict):
    input = ui.name_line.text()
    num = int(get_key(dict,input)[0])
    xls_path = bptree.search(num).value[0]
    pic_path = bptree.search(num).value[1]
    info = read.readData(xls_path)
    for i in range(len(info)):
        UIdesign.Ui_MainWindow.printf(ui, col[i] + ':' + info[i] + '\n')
    pixmap = QtGui.QPixmap(pic_path)
    UIdesign.Ui_MainWindow.show_picture(ui, pixmap)

def showUI(bptree,dict):
    app = QApplication(sys.argv)
    MainWindow = QMainWindow()
    ui = UIdesign.Ui_MainWindow()
    ui.setupUi(MainWindow)
    MainWindow.show()
    ui.rank_search_button.clicked.connect(partial(rank_search,ui,bptree))
    ui.name_search_button.clicked.connect(partial(name_search,ui,bptree,dict))
    sys.exit(app.exec_())

