#include<bits/stdc++.h>

using namespace std;
void GenPrime();
long long int prime[1000008];
int main()
{
    long long int i,n,first,range;
    GenPrime();
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        first=0;
        range=n/2;
        for(i=3;i<=range;i++)
        {
            if(prime[i]&&prime[n-i])
            {
                first=1;
                break;
            }
        }
        if(first!=0)
            printf("%lld = %lld + %lld\n",n,i,n-i);
        else
            printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}
 
void GenPrime()
{
    long long int i,j,m;
    m=sqrt(1000008);
    memset(prime,1,sizeof(prime));
    prime[0]=0;
    for(i=2;i<=m;i++)
    {
        if(prime[i])
            for(j=i+i;j<=1000008;j=j+i)
            {
                prime[j]=0;
            }
    }
}
