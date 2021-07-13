#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,l,r,c=0;
    cin>>n>>l>>r;
    c=n-max(l+1,n-r)+1;
    cout <<c<< endl;
    return 0;
}
