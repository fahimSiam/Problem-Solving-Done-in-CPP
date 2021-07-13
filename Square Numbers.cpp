#include <bits/stdc++.h>

using namespace std;

int main(){
    while(true){
    int a,b,res;
    cin>>a>>b;
    if(a==0 && b==0)break;
        res=0;
        while(a<=b){
            int temp= sqrt(a);
            if(a==pow(temp,2))res++;
            a++;
    }
    cout <<res<< endl;
}
return 0;
}
