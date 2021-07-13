#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin>>a;
    b=0;
    while(a>b){
        long long n,sum,i,j;
        cin>>n;
        int x=sqrt(n);
        sum=0;
        for(i=1;i<=x;i++){
            if(n%i !=0)continue;
            sum+=i;
            j=n/i;
            if(j != i) sum+=j;
            }
            b++;
        sum=sum-n;
        cout<<sum<<endl;
    }
   return 0;
    }
