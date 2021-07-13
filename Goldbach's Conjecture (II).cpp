#include<bits/stdc++.h>

using namespace std;
bool prime[1000001];
void siv(int n){
    int s=sqrt(n);
    
    for(int i=4;i<=n;i+=2){
        prime[i]=1;
    }
    for(int i=3;i<=s;i+=2){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }
    prime[1]=1;
}


int main() {
    int n,s,e,c;
    siv(1000000);
    while(cin>>n&&n!=0){
        s=2;
        e=n-1;
        c=0;
        while(s<=e){
            if(prime[s]+prime[e]==0 && s+e==n){
                c++;
                s++;
                e--;
            }
            else if(s+e>n){
                e--;
            }
            else{
                s++;
            }
        }
    cout<<c<<endl;
}
    return 0;
}
