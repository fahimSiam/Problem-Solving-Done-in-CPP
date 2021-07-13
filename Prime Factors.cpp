#include <bits/stdc++.h>

using namespace std;


void prime(long long int n){
    while(n%2==0){
        cout<<2;
        n=n/2;
        if(n>1){
            cout<<" x ";
        }
    }
    for(long long int i=3;i<=sqrt(n);i=i+2){
        while(n%i==0){
            cout<<i;
            n=n/i;
            if(n!=1){
                cout<< " x ";
            }
        }
    }
    if(n>2){
        cout<<n;
    }
    cout<<endl;
}

int main()
{
long long int n;
while(cin>>n&&n!=0){
    long long int m= abs(n);
    cout<<n<<" = ";
    if(n<0){
        cout<<"-1 x ";
        prime(m);
    }
    else{
        prime(m);
    }
}


return 0;
}
