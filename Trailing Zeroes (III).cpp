#include <bits/stdc++.h>

using namespace std;

long long int trail(long long int a){

    long long int t=0;
    for(long long int i=5;a/i>=1;i*=5){
        t+=a/i;
    }
    return t;
}


long long cbinary(int s, int e, int n){
    int m;
	int c;
	int t;
	if(s>e) {
		return -1;
	}
	m=(s+e)/2;
    c= trail(m);
	if(c==n) {

    while(trail(m) == n) {
			m--;
		}

		return ++m;
	}

	if(c< n) {
		return cbinary(m+1,e,n);
	}
	else {
		return cbinary(s, m-1, n);
	}
}
int main(){
long long int n,p,c=1;

cin>>n;


while(n--)
{
    int x;
    cin>>x;
    int q=cbinary(1,INT_MAX,x);
    if(q!=-1){
        cout<<"Case "<<c<<": "<<q<<endl;
    }

    else{
         cout<<"Case "<<c<<": impossible"<<endl;
    }
    c++;
}
return 0;
}
