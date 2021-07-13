#include <bits/stdc++.h>
#define ll long long

using namespace std;

    int main()
{   ll int i,j,a,b;
    string st,s;
   // a=0;
   // b=0;
    cin>>i;
    while(i--){
        cin>>st>>j;
        while(j--){
            cin>>s;
            if(strstr(st.c_str(),s.c_str())){
                cout<<"y"<<endl;
            }
            else{
                cout<<"n"<<endl;
            }
           // b++;
        }
//a++;
    }

    return 0;
}
