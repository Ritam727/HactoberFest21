#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
double arr[12][12],a=0;
int i,j;
string o;
cin>>o;
for(i=0;i<12;++i){
for(j=0;j<12;++j){
cin>>arr[i][j];}}
for(i=0;i<12;++i){
for(j=0;j<12;++j){
if(j<i){
a+=arr[i][j];}}}
if(o=="S"){
cout<<fixed<<setprecision(1)<<a<<endl;}
if(o=="M"){
cout<<fixed<<setprecision(1)<<(a/66.0)<<endl;}
return 0;
}