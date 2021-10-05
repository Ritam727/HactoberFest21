from collections import defaultdict
def bfs(graph,s):
    q=[s]
    v=[0]*n 
    v[s]=1 
    d=[]
    while q:
        a=q.pop(0)
        d.append(a)
        for i in graph[a]:
            if v[i]!=1:
                q.append(i)
                v[i]=1
    return d
n=int(input())
graph=defaultdict(list)
e=int(input())
for i in range(e):
    u,v=map(int,input().split())
    graph[u].append(v)
    graph[v].append(u)
s=2  
print(bfs(graph,s))
#input
#4
#6
#0 1
#0 2
#1 2
#2 0
#2 3
#3 3
#Output
#[2, 0, 1, 3]
