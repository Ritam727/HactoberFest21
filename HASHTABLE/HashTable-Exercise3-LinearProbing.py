# -*- coding: utf-8 -*-
"""
Created on Thu Jul  1 00:04:42 2021

@author: SOUVICK MAZUMDAR
"""
'''
here we have used Linear Probing
i.e. if the index is already filled with any other key then it will consequtive empty space
'''

class HashTable:
    def __init__(self):
        self.max=10
        # self.arr=[None for i in range(self.max)]
        self.arr=[None for i in range(self.max)]
    def getHashIndex(self,key):
        h=0
        for i in range(len(key)):
            h=h+ord(key[i])
        return(h%self.max)
    
    def __setitem__(self,key,value):
        index=self.getHashIndex(key)
        if self.arr[index]!=None and self.arr[index][0]==key:
           self.arr[index]=(key,value)
        elif self.arr[index]!=None:
            b=0
            for i in range(index+1,len(self.arr)):
                if self.arr[i]==None:
                    self.arr[i]=(key,value)
                    b=1
                    break
            if b==0:
                for i in range(0,index):
                    if self.arr[i]==None:
                        self.arr[i]=(key,value)
                        b=1
                        break
            if b==0:
                raise Exception("Hashmap is full")
        else:
            self.arr[index]=(key,value)
        
    def __getitem__(self,key):
        # index=self.getHashIndex(key)
        # return self.arr[index]
        for element in self.arr:
            if element==None:
                continue
            if element[0]==key:
                return element[1]
            
    def __delitem__(self,key):
        
        #index=self.getHashIndex(key)
        
        # self.arr[index]=None
        print(self.arr)
        for element in range(len(self.arr)):
            if self.arr[element]==None:
                continue
            if self.arr[element][0]==key:
                self.arr[element]=None
            print(element)
        
       
      
                
if __name__=='__main__':
    t=HashTable()
    t["march 6"] = 20
    t["march 17"] =  88
    print(t["march 6"])
    print(t["march 17"])
    print()
    t["march 17"] = 29
    print(t["march 17"])
    print()
    
    t["nov 1"] = 1
    print(t["nov 1"])
    print()
# [('march 17', 29), ('nov 1', 1), None, None, None, None, None, None, None, ('march 6', 20)]
# In [120]:
    t["march 33"] = 234
    print(t["march 33"])
    print()
# [('march 17', 29), ('nov 1', 1), None, None, None, None, None, ('march 33', 234), None, ('march 6', 20)]
# In [121]:
    t["dec 1"]
    print(t["dec 1"])
    print()
# In [122]:
    t["march 33"]
    print(t["march 33"])
    print()
# Out[122]:
# 234
# In [123]:
    t["march 33"] = 999
    print(t["march 33"])
    print()
# [('march 17', 29), ('nov 1', 1), None, None, None, None, None, ('march 33', 999), None, ('march 6', 20)]
# In [124]:
    t["march 33"]
    print(t["march 33"])
    print()
# Out[124]:
# 999
# In [125]:
    t["april 1"]=87
# [('march 17', 29), ('nov 1', 1), None, None, None, None, None, ('march 33', 999), ('april 1', 87), ('march 6', 20)]
# In [126]:
    t["april 2"]=123
# [('march 17', 29), ('nov 1', 1), ('april 2', 123), None, None, None, None, ('march 33', 999), ('april 1', 87), ('march 6', 20)]
# In [127]:
    t["april 3"]=234234
# [('march 17', 29), ('nov 1', 1), ('april 2', 123), ('april 3', 234234), None, None, None, ('march 33', 999), ('april 1', 87), ('march 6', 20)]
# In [128]:
    t["april 4"]=91
# [('march 17', 29), ('nov 1', 1), ('april 2', 123), ('april 3', 234234), ('april 4', 91), None, None, ('march 33', 999), ('april 1', 87), ('march 6', 20)]
# In [129]:
    t["May 22"]=4
# [('march 17', 29), ('nov 1', 1), ('april 2', 123), ('april 3', 234234), ('april 4', 91), ('May 22', 4), None, ('march 33', 999), ('april 1', 87), ('march 6', 20)]
# In [130]:
    t["May 7"]=47
# [('march 17', 29), ('nov 1', 1), ('april 2', 123), ('april 3', 234234), ('april 4', 91), ('May 22', 4), ('May 7', 47), ('march 33', 999), ('april 1', 87), ('march 6', 20)]
# In [131]:
    t["Jan 1"]=0
    
    # t['march 17']=459#its index is also 9
    # # above 4 lines are used when collision scenarion is taken
    # print(t.arr)
    # print(t['march 6'])
    
  
    del t['march 17']
    print(t.arr)
    
    
     
    