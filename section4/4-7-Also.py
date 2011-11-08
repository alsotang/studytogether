#! usr/bin/env python
# coding=utf-8
'''
#=============================================================================
#     FileName: 4-7-Also.py
#         Desc: 4-7.cpp对应的python代码
#       Author: Alsotang
#        Email: alsotang@gmail.com
#     HomePage: http://tangzhan.li
#      Version: 0.0.1
#   LastChange: 2011-11-08 18:22:35
#      History:
#=============================================================================
'''
PI = 3.1415926
def main():
    r, h = raw_input("请输入半径和高度（以空格分隔）：").split()
    r = float(r)
    h = float(h)

    print "长度为：", 2 * PI * r
    print "面积为：", PI * (r ** 2)
    print "球面积为：", 4 * PI * (r ** 2)
    print "球体积为：", (4 / 3) * PI * (r ** 3)
    print "球柱体积为：", h * PI * (r ** 2)




if __name__ == '__main__':
    main()
