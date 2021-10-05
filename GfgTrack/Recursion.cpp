#include<bits/stdc++.h>
#define pii pair<int, int>
#define fori(s,n) for(int i=s;i<n;i++)
#define forvi(v) for(auto i = v.begin(); i != v.end(); i++)
#define val(x) (*x)
#define ll long long
#define umii unordered_map<int,int>
#define usi unordered_set<int>
#define takeinputarray(arr,n) fori(0,n){cin>>arr[i];}
#define printarray(arr,n) fori(0,n){cout<<arr[i]<<' ';}cout<<endl;
#define takeinputvector(v,n) fori(0,n){int x;cin>>x;v.push_back(x);}
#define printvector(v) forvi(v){cout<<val(i)<' ';}
#define mod 1000000007
using namespace std;

int josephus(int n,int k){
    if(n==1){
        return 0;
    }
    return (k+josephus(n-1,k))%n;
}
bool isLucky(int i, int n)
{
    if (n < i)
        return true;
    else if (n % i == 0)
        return false;
    
    return isLucky(i + 1, n-n/i);
}
void subSets(string s, string curr, int i, vector<string> &v)
{
    if (i == s.length())
    {
        v.push_back(curr);
        return;
    }
    subSets(s, curr, i + 1, v);
    subSets(s, curr + s[i], i + 1, v);
}
void printperm(string s, int ind = 0)
{
    if (ind == s.length())
    {
        cout << s << " ";
    }
    fori(ind, s.length())
    {
        swap(s[ind], s[i]);
        printperm(s, ind + 1);
        swap(s[ind], s[i]);
    }
}
long long power(long long N, int R, long long res = 1)
{
    //Your code here
    if (R == 0)
        return res % mod;
    if (R % 2 == 1)
        res = (res * N) % mod;
    return power((N * N) % mod, R / 2, res);
}

// {Tower of Hanoi
long long shifting(int x)
{
    if (x == 1)
    {
        return 1;
    }
    return 1 + 2 * shifting(x - 1);
}
void moving(int x, int a, int b, int c)
{
    if (x == 1)
    {
        cout << "move disk 1 from rod " << a << " to rod " << c << endl;
        return;
    }
    moving(x - 1, a, c, b);
    cout << "move disk " << x << " from rod " << a << " to rod " << c << endl;
    moving(x - 1, b, a, c);
}
long long toh(int n, int from, int to, int aux)
{
    moving(n, from, aux, to);
    return shifting(n);
}
// }