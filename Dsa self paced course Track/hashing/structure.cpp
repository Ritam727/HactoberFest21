#include<bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>

using namespace std;

struct kvpair{
    int key;
    int value;
    kvpair(int a,int b){
        key=a;
        value=b;
    };
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    kvpair p1(0,6);
    cout<<p1.key<<" "<<p1.value;

    cout<<endl;
    return 0;
}