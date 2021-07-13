#include <bits/stdc++.h>

using namespace std;

long long int GCD(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return GCD(b,a%b);
    }
}

int main(){
long long int m,n,p,x,y;
cin>>n;
for(int k=0;k<n;k++){
        cin>>x>>y;
       p=GCD(x,y);
       m=(x*y)/p;
    cout<<p<<" "<<m<<endl;
}
return 0;
}
