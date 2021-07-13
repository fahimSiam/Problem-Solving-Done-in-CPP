#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,m,i,j,c;
    while(cin>>n&&n!=0){
        m=n;
        c=0;
        for(i=2;i*i<=m;i++){
            if(m%i==0){
                c++;
            }
                while(m%i==0){
                m=m/i;
                }
            

        }
        if(m>2){
            c++;
        }
        cout<<n<<" : "<<c<<endl;
    }
     return 0;

}
