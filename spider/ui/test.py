# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'main.ui'
#
# Created by: PyQt5 UI code generator 5.15.2
#
# WARNING: Any manual changes made to this file will be lost when pyuic5 is
# run again.  Do not edit this file unless you know what you are doing.


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(511, 513)
        MainWindow.setWindowTitle("DouBanTop250")
        self.centralwidget = QtWidgets.QWidget(MainWindow)
        self.centralwidget.setObjectName("centralwidget")
        self.verticalLayout = QtWidgets.QVBoxLayout(self.centralwidget)
        self.verticalLayout.setObjectName("verticalLayout")
        self.graphicsView = QtWidgets.QGraphicsView(self.centralwidget)
        self.graphicsView.setStyleSheet("border-image: url(:/douban.jpg);")
        self.graphicsView.setObjectName("graphicsView")
        self.verticalLayout.addWidget(self.graphicsView)
        self.label = QtWidgets.QLabel(self.centralwidget)
        self.label.setMaximumSize(QtCore.QSize(580, 16777215))
        self.label.setObjectName("label")
        self.verticalLayout.addWidget(self.label, 0, QtCore.Qt.AlignHCenter|QtCore.Qt.AlignBottom)
        self.pushButton = QtWidgets.QPushButton(self.centralwidget)
        self.pushButton.setObjectName("pushButton")
        self.verticalLayout.addWidget(self.pushButton, 0, QtCore.Qt.AlignHCenter)
        self.pushButton_3 = QtWidgets.QPushButton(self.centralwidget)
        self.pushButton_3.setObjectName("pushButton_3")
        self.verticalLayout.addWidget(self.pushButton_3, 0, QtCore.Qt.AlignHCenter)
        self.pushButton_2 = QtWidgets.QPushButton(self.centralwidget)
        self.pushButton_2.setObjectName("pushButton_2")
        self.verticalLayout.addWidget(self.pushButton_2, 0, QtCore.Qt.AlignHCenter)
        self.closebutton = QtWidgets.QPushButton(self.centralwidget)
        self.closebutton.setObjectName("closebutton")
        self.verticalLayout.addWidget(self.closebutton, 0, QtCore.Qt.AlignHCenter)
        MainWindow.setCentralWidget(self.centralwidget)
        self.statusbar = QtWidgets.QStatusBar(MainWindow)
        self.statusbar.setObjectName("statusbar")
        MainWindow.setStatusBar(self.statusbar)
        self.actionrank = QtWidgets.QAction(MainWindow)
        self.actionrank.setObjectName("actionrank")
        self.actionname = QtWidgets.QAction(MainWindow)
        self.actionname.setObjectName("actionname")
        self.actionjudge = QtWidgets.QAction(MainWindow)
        self.actionjudge.setObjectName("actionjudge")

        self.retranslateUi(MainWindow)
        self.closebutton.clicked.connect(MainWindow.close)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)

    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        self.label.setText(_translate("MainWindow", "请问想通过哪种方式查找电影信息？"))
        self.pushButton.setText(_translate("MainWindow", "豆瓣排名"))
        self.pushButton_3.setText(_translate("MainWindow", "电影名"))
        self.pushButton_2.setText(_translate("MainWindow", "豆瓣评分"))
        self.closebutton.setText(_translate("MainWindow", "退出"))
        self.actionrank.setText(_translate("MainWindow", "by_rank"))
        self.actionname.setText(_translate("MainWindow", "by_name"))
        self.actionjudge.setText(_translate("MainWindow", "by_judge"))
import picture_rc
