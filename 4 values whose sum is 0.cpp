#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n,i,j,k,x,a;
    cin>>n;
        int arr1[n],arr2[n],arr3[n],arr4[n],sum12[n*n],sum34[n*n];
        for(i=0;i<n;i++){
            cin>>arr1[i]>>arr2[i]>>arr3[i]>>arr4[i];
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
            sum12[i*n+j]=arr1[i]+arr2[j];
        }}
        sort(sum12, sum12+n*n);
        a=0;
        for(k=0;k<n;k++){
            for(x=0;x<n;x++){
                int temp =-arr3[k]-arr4[x];
                pair<int*,int*>p=equal_range(sum12,sum12+n*n,temp);
                a+=p.second-p.first;
            }
        }
    cout<<a;
    return 0;
}
