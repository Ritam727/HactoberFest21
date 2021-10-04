Problem- Power of a number using Recursion
Sample input 1
2
3
Output:
8
  
Sample input 2
5
2
25
  
#include <iostream>
using namespace std;

int power(int n, int p)
{
    //base case to end recursion when power equal to 0
    if(p==0)
    return 1;
    
    return n*power(n,p-1);
}

int main()
{
    //input of a number
    int n;
    cin>>n;
    
    //input of power
    int p;
    cin>>p;
    
    cout<<power(n,p);
    return 0;
}

Time Complexity: O(p)
Space Complexity: O(p)
