#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,x;
    cin>>x;
    n=1000000;
    int arr[n];
    arr[0] = 0;
    arr[1] = 0;

    for (i = 2;i<n ;i++){
        arr[i] = 1;
    }

    	for(i=2;i*i<=n;i++){
    		if(arr[i]!=0){
    		for(j=i*i;j<=n;j+=i){
    			arr[j]=0;
    		}
    		}
    	}

    	for(i=1;i<1000;i++){
    		if(arr[(x*i)+1]!=1){
    			cout<<i<<endl;
                    break;
    		}
    	}
    return 0;
}
