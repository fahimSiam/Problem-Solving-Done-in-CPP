#include <bits/stdc++.h>

using namespace std;

long long int trail(long long int a){
    
    long long int t=0;
    for(long long int i=5;a/i>=1;i*=5){
        t+=a/i;
    }
    return t;
}


int main(){
long long int n,i;
vector<long long> vec; 
cin>>n;
for(i=1;i<=10000000;i++){
if(trail(i)==n){
    vec.push_back(i);
    }
}

cout<<vec.size()<<endl;

for (auto i = vec.begin(); i != vec.end(); ++i) 
    cout << *i << " "; 
    return 0;
}
