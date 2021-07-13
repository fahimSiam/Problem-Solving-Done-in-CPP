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
int m,n,x,y;
string str;
int ar[100];
cin>>n;
getchar();
for(int k=0;k<n;k++){
    x=0;
    m=0;
   
    getline(cin,str);
    stringstream ss(str);
    while(ss>>ar[x]){
        x++;
    }

for(int i=0;i<x;i++){
        for(int j=i+1;j<x;j++){
            y=GCD(ar[i],ar[j]);
           m=max(m,y);
        }
    }
    cout<<m<<endl;
}
return 0;
}
