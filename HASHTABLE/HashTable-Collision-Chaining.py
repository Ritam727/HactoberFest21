# -*- coding: utf-8 -*-
"""
Created on Wed Jun 30 20:05:06 2021

@author: SOUVICK MAZUMDAR
"""
'''
in hashtable if there is collision i.e. if two keys have same index
then how to handle that situation
There are two approaches
1.Chaining
2.Linear Probing

here we have used Chaining process
i.e joining a linked list if there are more than one values in particular index
'''
'''
USE OF enumerate() in PYTHON:
    It is used to keep a count of the iteration 
    this convert the list items to a tuple a and then give them the index
    Here when enumerate is used then idx=index and element=tuple
    we can also give a particular starting range to the enumerate object like:
    # Python program to illustrate
    # enumerate function in loops
    l1 = ["eat","sleep","repeat"]
     
    # printing the tuples in object directly
    for ele in enumerate(l1):
        print (ele)
    print()
    # changing index and printing separately
    for count,ele in enumerate(l1,100):
        print (count,ele)
    Output: 
     
    
    (0, 'eat')
    (1, 'sleep')
    (2, 'repeat')
    
    100 eat
    101 sleep
    102 repeat
'''

class HashTable:
    def __init__(self):
        self.max=10
        # self.arr=[None for i in range(self.max)]
        self.arr=[[] for i in range(self.max)]
    def getHashIndex(self,key):
        h=0
        for i in range(len(key)):
            h=h+ord(key[i])
        return(h%self.max)
    
    def __setitem__(self,key,value):
        index=self.getHashIndex(key)
        found=False
        for idx,element in enumerate(self.arr[index]):#here element is tuple and idx is the index of that tuple
            if len(element)==2 and element[0]==key:
                self.arr[index][idx]=(key,value)
                #new tuple is formed since tuples are immutable, we can use list also
                found=True
                break
        if not found:
                self.arr[index].append((key,value))#appending a tuple
                
        # self.arr[index]=value
        
    def __getitem__(self,key):
        index=self.getHashIndex(key)
        # return self.arr[index]
        for element in self.arr[index]:
            if element[0]==key:
                return element[1]
            
    def __delitem__(self,key):
        index=self.getHashIndex(key)
        # self.arr[index]=None
        for idx,element in enumerate(self.arr[index]):
            if element[0]==key:
                del self.arr[index][idx]# del function will delete the tuple so we will be saved by filling that space with None
                
        
        
        
if __name__=='__main__':
    t=HashTable()
    # t['march 6']=120 #its index is 9
    # t['march 8']=67
    # t['march 9']=4
    # t['march 17']=459 #its indeex is also 9, so here overlapping will take place
    
    # print(t['march 6'])# here output is 459 because overlapping took place
    
    
    t['march 6']=120 #its index is 9
    t['march 6']=67
    t['march 9']=4
    t['march 17']=459#its index is also 9
    # above 4 lines are used when collision scenarion is taken
    print(t.arr)
    print(t['march 6'])
    
    '''
    Output:
        [[], [], [('march 9', 4)], [], [], [], [], [], [], [('march 6', 67), ('march 17', 459)]]
        67
    '''    
    del t['march 17']
    print(t.arr)
    
    '''
    [[], [], [('march 9', 4)], [], [], [], [], [], [], [('march 6', 67)]]
    '''
     