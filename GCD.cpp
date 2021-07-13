#include <bits/stdc++.h>

using namespace std;

int GCD(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return GCD(b,a%b);
    }
}

int main(){
int m,n;
while(cin>>n&&n!=0){
    m=0;
    for(int i=1;i<n;i++){
        for(int j=i+1;j<=n;j++){
        m+=GCD(i,j);
        }
    }
    cout<<m<<endl;
}
return 0;
}
