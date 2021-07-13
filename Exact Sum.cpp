#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,i,k,x,y,m;
    while(cin>>n){
        int arr[n]={};
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>m;
        sort(arr, arr+n);
        int a,b;
        a=0;
        b=n-1;
        while(a<b){
            if(arr[a]+arr[b]==m){
                x=arr[a];
                y=arr[b];
                a++;
                b--;
            }
            else if(arr[a]+arr[b]<m){
                a++;
            } 
            else if(arr[a]+arr[b]>m){
                b--;
            } 
        }
        
    cout<<"Peter should buy books whose prices are "<<x<<" and "<<y<<"."<<endl;
    cout<<""<< endl;
    }
return 0;
}
