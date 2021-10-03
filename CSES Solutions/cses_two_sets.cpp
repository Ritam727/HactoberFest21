#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;

using namespace std;

/* 
Simple function that returns a vector of truth values
of numbers till n being prime or not based on sieve of eratosthenes
*/
vector<bool> sieve(ll n){
	vector<bool> isPrime(n+1, true); // resultant vector

    // from 2 to root n, eliminating multiples of those numbers who are true
	for(ll i=2; i*i<=n; i++){
		if(isPrime[i]){
			for(ll j=i+i; j<=n; j+=i){
				isPrime[j]=false;
			}
		}
	}
	return isPrime;
}

// BFS function that returns shortest distance between source and destination
ll bfs(vector<vector<ll>> paths, int source, int destination){
    ll n = paths.size();
    vector<bool> visited(n, false);
    vector<ll> distance(n, -1);
    queue<ll> q;
    q.push(source);
    visited[source] = true;
    distance[source] = 0;
    while(!q.empty()){
        ll curr = q.front();
        q.pop();
        for(ll i=0; i<paths[curr].size(); i++){
            if(!visited[paths[curr][i]]){
                visited[paths[curr][i]] = true;
                q.push(paths[curr][i]);
                distance[paths[curr][i]] = distance[curr]+1;
            }
        }
    }
    return distance[destination];
}

ll gcd(ll a, ll b){
    if(b==0){
        return a;
    }
    return gcd(b, (a%b));
}

ll binpow(ll a, ll b){
    if(b==0){
        return 1;
    }
    ll res = binpow(a, (b/2));
    if(b%2){
        return res*res*a;
    }
    else{
        return res*res;
    }
}

ll lcm(ll a, ll b){
    return a/gcd(a,b) * b;
}

int main(){
    ll n=0;
    cin>>n;
    ll overallSum = (n*(n+1))/2;
    if(overallSum%2 == 0){
        cout<<"YES"<<"\n";
        vector<bool> considered(n, false);
        ll individualSum = overallSum/2;
        vector<ll> set1;
        vector<ll> set2;
        for(ll i=n; i>0; i--){
            if(individualSum == 0) break;
            if(i > individualSum) continue;
            set1.push_back(i);
            considered[i-1] = true;
            individualSum -= i;
        }
        for(ll i=1; i<=n; i++){
            if(!considered[i-1]) set2.push_back(i);
        }
        cout<<set1.size()<<"\n";
        for(ll i=0; i<set1.size(); i++){
            cout<<set1[i]<<" ";
        }
        cout<<"\n"<<set2.size()<<"\n";
        for(ll i=0; i<set2.size(); i++){
            cout<<set2[i]<<" ";
        }
    }
    else{
        cout<<"NO";
    }
    return 0;
}