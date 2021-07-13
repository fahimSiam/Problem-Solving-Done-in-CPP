#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{   int i,n;
double ab,ac,bc,ad,de,r;
cin>>n;
for(i=1;i<=n;i++){
    cin>>ab>>ac>>bc>>r;
    r=r/(r+1);
    ad=ab*sqrt(r);
    printf("Case %d: %lf\n",i,ad);
    }
    return 0;
}
