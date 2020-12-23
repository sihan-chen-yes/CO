from spider import generate
from BPlus import Bptree,KeyValue
import os
import UI

movie_dict = {'1':'肖申克的救赎','32':'何以为家','45':'闻香识女人'}
#movie_dict = generate()
#爬虫 产生本地 .xls文件库与.jpg文件库 得到字典 rank ,中文名

#generate bptree
py_path = os.getcwd()
table_path = py_path + '\\table\\豆瓣电影Top'
picture_path = py_path + '\\picture\\豆瓣电影Top'
kv_list = []
for i in range(0, 250):
        key = i + 1
        value = ((table_path+str(key)+'.xls'),(picture_path+str(key)+'.jpg'))
        kv_list.append(KeyValue(key, value))
content_bptree = Bptree(20, 15)
for kv in kv_list:
    content_bptree.insert(kv)

#启动UI界面
UI.showUI(bptree=content_bptree,dict=movie_dict)
