# -*- coding: utf-8 -*-
"""
Created on Wed Jun 30 23:14:59 2021

@author: SOUVICK MAZUMDAR
"""

'''
excercise 1
'''

            
def part1(arr):
    print(sum(arr[0:7])/7)
def maxi(arr):
    print(max(arr[0:10]))

    
with open('nyc_weather.csv','r') as f:    

     
# arr=[]

#     for line in f:
#         token=line.split(',')
#         try:
#             temp=int(token[1])
#             arr.append(temp)
#         except:
#             print("Invalid temprature. Ignore the row")
# part1(arr)
# maxi(arr)
    a={}
    for line in f:
            token=line.split(',')
            try:
               a[token[0]]=  int(token[1])  
            except:
                print("Invalid temprature. Ignore the row")
        
print(a)
print(a['Jan 9'])
print(a['Jan 4'])
    