#include<bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>

using namespace std;

int main()
{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
    unordered_multimap<int,int> umm;
    umm.insert(make_pair(3,6));
    umm.insert(make_pair(3,5));
    cout<<umm.find(3)->second;
    cout<<endl;
    return 0;
}