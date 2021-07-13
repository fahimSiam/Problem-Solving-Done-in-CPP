#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,i,j,k,x;
    while(cin>>n&&n!=0){
        int arr[n];
        x=0;
        for(i=0;i<n;i++){
            cin>>j;
            arr[i]=j;
        }
        sort(arr, arr+n);
        int a,b,c;
        a=0;
        b=n-1;
        c=b-1;
        while(a<b){
        while(a<c){
            if(arr[a]+arr[c]<arr[b]){
                x+=(c-a);
                a++;
            }
            else{
                c--;
            } 
        }
        b--;
        c=b-1;
        a=0;
        }
    cout<<x<<endl;
    }
return 0;
}
