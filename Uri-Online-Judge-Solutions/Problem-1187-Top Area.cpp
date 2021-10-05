#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
double arr[12][12],a=0.0;
int i,j;
string o;
cin>>o;
for(i=0;i<12;++i){
for(j=0;j<12;++j){
cin>>arr[i][j];}}
for(i=0;i<5;++i){
for(j=i+1;j<=(10-i);++j){
a+=arr[i][j];}}
if(o=="S"){
cout<<fixed<<setprecision(1)<<a<<endl;}
if(o=="M"){
cout<<fixed<<setprecision(1)<<(a/30.0)<<endl;}
return 0;
}