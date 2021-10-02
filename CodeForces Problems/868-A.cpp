//https://codeforces.com/problemset/problem/868/A
#include <iostream>
using namespace std ;
 
int main() {
    string s1 , s2 ;
    int n , a = 0 , b = 0 ;
    cin >> s1 >> n ;
    for(int i = 0 ; i < n ; i++){
        cin >> s2 ;
        if(s1 == s2){
            cout << "YES\n" ;
            return 0;
        }
        if(s1[0] == s2[1])
            a++;
        if(s1[1] == s2[0])
            b ++ ;
    }
    if(a >= 1 && b >= 1)
        cout << "YES\n" ;
    else
        cout << "NO\n" ;
}
