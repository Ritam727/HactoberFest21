# -*- coding: utf-8 -*-
"""
Created on Wed Jun 30 23:44:04 2021

@author: SOUVICK MAZUMDAR
"""
a={}
value=0
with open('poem.txt','r') as f:
    for line in f:
        token=line.split(' ')
        for i in token:
            i=i.replace('\n','')
            if i in a:
                a[i]+=1
            else:
                a[i]=1
  
print(a)       