class Solution:
    def dfs(self,i,j,n,m,grid,vis):
        if i>=n or i<0 or j>=m or j<0 or grid[i][j]==0:
            self.c+=1
            return
        if vis[i][j]==1:
            return 
        vis[i][j]=1
        r=[-1,1,0,0]
        c=[0,0,-1,1]
        for k in range(4):
            self.dfs(i+r[k],j+c[k],n,m,grid,vis)
    def islandPerimeter(self, grid: List[List[int]]) -> int:
        self.c=0
        n=len(grid)
        m=len(grid[0])
        
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j]==1:
                    d=4
                    if i-1>=0:
                        if grid[i-1][j]==1:
                            d-=1
                    if j-1>=0:
                        if grid[i][j-1]==1:
                            d-=1
                    if i+1<n:
                        if grid[i+1][j]==1:
                            d-=1
                    if j+1<m:
                        if grid[i][j+1]==1:
                            d-=1
                    self.c+=d
        return self.c
