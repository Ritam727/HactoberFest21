#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;

using namespace std;

int main(){
	int n=0;
	cin>>n;
	set<ll> s;
	for(int i=0; i<n; i++){
		int temp=0;
		cin>>temp;
		s.insert(temp);
	}
	cout<<s.size();
	return 0;
}