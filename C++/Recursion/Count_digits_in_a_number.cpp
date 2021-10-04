Sample Input 1
123
Output
3

Sample Input 2
1675
Output
4

#include <iostream>
using namespace std;

int countDigits(int n)
{
   if(n<=9)
   return 1;
   
   return 1+countDigits(n/10);
}
int main()
{
    //input of a number
    int n;
    cin>>n;
    
    cout<<countDigits(n);
    return 0;
}

Time Complexity: O(log(n))
Space Complexity: O(log(n))
