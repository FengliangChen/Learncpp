#!/usr/bin/env python3
# -*- coding:utf-8 -*- 

'''
 @Author      : Simon Chen
 @Email       : bafelem@gmail.com
 @datetime    : 2019-07-03 13:53:39
 @Description : Description
 @FileName    : test.py
'''
import time

start_time = time.time()

a =0
while a < 1000000:
	a = a + 1
	print(a)

end_time = time.time()

print("took %s senconds"%(end_time - start_time))