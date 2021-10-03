#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define vi vector<int>

void solve();

string convert(long long int n)
{
    string s = "";
    while(n>0){
    	s = to_string(n%2) + s;
    	n = n/2;
    }
    return s;
}
 
long long int dec(string n)
{
    string num = n;
    long long int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    long long int base = 1;
 
    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
 
    return dec_value;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
        cout << "\n";
    }
	return 0;
}

void solve()
{
	long long n, m;
	cin >> n >> m;
	if(n>m){
		cout << 0;
		return;
	}
	m++;
	string small = convert(n);
	string large = convert(m);
	int len = small.size();
	string temp = large;
	int diff = large.size() - small.size();
	int index = -1;
	long long int ans;
	for(int i = 0; i<len; i++){
		temp[i+diff] = small[i];
	}
	if(temp >= large) {
		long long int val = dec(temp);
		ans = val^n;
		cout << ans;
		return;
	}
	for(int i = temp.size()-1; i>=0; i--){
		if(temp[i] == '0'){
			temp[i] = '1';
			if(temp >= large){
				index = i;
				break;
			};
		}
	}
	string curr = temp;
	for(int i = index+1; i<temp.size(); i++){
		temp[i] = small[i-diff];
		if(temp >= large){
			curr = temp;
		}
		else{
			temp = curr;
		}
	}
	ans = dec(curr)^n;
	cout << ans;
}