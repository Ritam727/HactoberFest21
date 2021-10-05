#include<iostream>
using namespace std;
int main()
{
    long n;
    cin >> n;
    for(long k=n+1; k<=2*n; k++)
        cout << k << " ";
    cout << endl;
    return 0;
}