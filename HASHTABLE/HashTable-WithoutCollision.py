# -*- coding: utf-8 -*-
"""
Created on Wed Jun 30 18:57:23 2021

@author: SOUVICK MAZUMDAR
"""

class HashTable:
    def __init__(self):
        self.max=100
        self.arr=[None for i in range(self.max)]
    def getHashIndex(self,key):
        h=0
        for i in range(len(key)):
            h=h+ord(key[i])
        return(h%self.max)
    # def add(self,key,value):
    #     index=self.getHashIndex(key)
    #     self.arr[index]=value
    # def get(self,key):
    #     index=self.getHashIndex(key)
    #     return(self.arr[index])
    
    # above two functions can be further modified using python's standard operators
    # So that we can get the value without calling these two function
    # like we get the value simply by using below syntax
    # tt.arr['Souvick']
    
    def __setitem__(self,key,value):
        index=self.getHashIndex(key)
        self.arr[index]=value
    def __getitem__(self,key):
        index=self.getHashIndex(key)
        return self.arr[index]
    def __delitem__(self,key):
        index=self.getHashIndex(key)
        self.arr[index]=None
if __name__=='__main__':
    tt=HashTable()
    print(tt.arr)
    print()
    # tt.add('Souvick',19)
    # tt.add('Tezas',18)
    # tt.add('Rahul',20)
    # tt.add('Snigdha',24)
    # print(tt.arr)
    # print()
    # print(tt.get('Rahul'))
    # print(tt.arr['Snigdha'])
    
    tt['Souvick']=19
    tt['Rahul']=20
    tt['Tezas']=18
    tt['Snigdha']=24
    print(tt.arr)
    print()
    print(tt['Snigdha'])
    print(tt['Souvick'])
    print(tt['Rahul'])
    print()
    del(tt['Rahul'])
    print()
    print(tt.arr)
    
        