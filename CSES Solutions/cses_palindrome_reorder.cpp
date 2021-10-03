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
    string s="";
    cin>>s;
    ll n = s.size();
    vector<ll> presence(26, 0);
    for(ll i=0; i<n; i++){
        presence[s[i]-'A']++;
    }
    if(n%2 == 0){
        for(ll i=0; i<26; i++){
            if(presence[i]%2 != 0){
                cout<<"NO SOLUTION";
                return 0;
            }
        }
        string result = "";
        for(ll i=0; i<26; i++){
            for(ll j=0; j<(presence[i]/2); j++){
                result.push_back('A'+i);
            }
        }
        for(ll i=25; i>=0; i--){
            for(ll j=0; j<(presence[i]/2); j++){
                result.push_back('A'+i);
            }
        }
        cout<<result;
    }
    else{
        ll oddcount = 0;
        for(ll i=0; i<26; i++){
            if((presence[i]%2) != 0){
                oddcount++;
            }
        }
        if(oddcount != 1){
            cout<<"NO SOLUTION";
            return 0;
        }
        else{
            string result = "";
            for(ll i=0; i<26; i++){
                for(ll j=0; j<(presence[i]/2); j++){
                    result.push_back('A'+i);
                }
            }
            for(ll i=0; i<26; i++){
                if(presence[i]%2 != 0){
                    result.push_back('A'+i);
                    break;
                }
            }
            for(ll i=25; i>=0; i--){
                for(ll j=0; j<(presence[i]/2); j++){
                    result.push_back('A'+i);
                }
            }
            cout<<result;
        }
    }
    return 0;
}