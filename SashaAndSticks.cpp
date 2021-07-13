#include <bits/stdc++.h> 
using namespace std; 

int main(){
    long long int n,k,z;
    cin>>n>>k;
    z=n/k;
    if(z%2==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}
