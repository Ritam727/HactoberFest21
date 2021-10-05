#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    
    while (true)
    {
        num = num + 1;
        int a = num / 1000;
        int b = (num / 100) % 10;
        int c = (num / 10) % 10;
        int d = (num / 1) % 10;

        if (a!=b and a!=c and a!=d and b!=c and b!=d and c!=d)
        {
            break;
        }
        
    }
    cout << num;
    return 0;    
}