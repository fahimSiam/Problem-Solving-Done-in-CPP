#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int day[7];
    cin>>n;
    for(int i=0;i<7;i++){
        cin>>day[i];
    }
    for(int a=0; a<7; a++){
        n-=day[a];
        if(n<=0){
            cout<<a+1<<endl;
            break;
        }
        if(a==6)
        a=-1;
    }

    return 0;
}
