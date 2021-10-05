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

using namespace std;

// {Eucledian Algorith-To find GCD of two numbers
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
// }
// O(log n) where n is min(a,b)
// lcm = (a*b)/gcd(a,b);

bool isPrime(int n){
    if(n==2 || n==3){
        return true;
    }
    else if(n==1 || n%2==0 || n%3==0){
        return false;
    }
    for(int i=5;i*i<=n;i+=6){
        if(n%i == 0 || n%(i+2)==0){
            return false;
        }
    }
    return true;
}
void primeFactors(int n)
{
    if (n <= 1)
    {
        return;
    }
    while (n % 2 == 0)
    {
        cout << "2 ";
        n = n / 2;
    }
    while (n % 3 == 0)
    {
        cout << "3 ";
        n = n / 3;
    }
    for (int i = 5; i * i <= n; i += 6)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
        while (n % (i + 2) == 0)
        {
            cout << i + 2 << " ";
            n /= (i + 2);
        }
    }
    if (n > 3)
        cout << n;
}
void sieve(int n)
{
    vector<bool> isPrime(n + 1, true);
    fori(2, n)
    {
        if (isPrime[i])
        {
            cout << i << " ";
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}
// O(nloglog n)

int traillingZeroesInFactorial(int n)
{
    int count = 0;
    int a = 5;
    while (a < n)
    {
        count += n / a;
        a *= 5;
    }
    return count;
}
int NoOfDigits(int n)
{
    return (int)(log10(n) + 1);
}
int power(int n,int r){
    int res = 1;
    while(r>0){
        if(n&1)
            res*=n;
        r = r>>1;
        n = n*n;
    }
    return res;
}
int digitsInFactorial(int N)
{
    // code here
    double res = 1;
    int count = 1;
    for (int i = 1; i <= N; i++)
    {
        res *= i;
        if (res >= 1e9)
        {
            count += 9;
            res /= (double)1e9;
        }
    }
    while (res > 10)
    {
        count++;
        res /= 10;
    }
    return count;
}
int digitsInFactorial(int N)
{
    // code here
    double res = 1;
    while (N > 0)
    {
        res += log10(N);
        N--;
    }
    return res;
}