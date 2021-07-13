#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,i;
    char arr[100001];
    cin>>n;
    while(n--){
        int flag=0;
		scanf("%s", arr);
		for(i=0; i<strlen(arr); i++){
			if(arr[i]=='1')break;
		}
		if(i==strlen(arr))flag=1;
		for(;i<strlen(arr);i++){
			if(arr[i]=='0')break;
		}
		for(;i<strlen(arr);i++){
			if(arr[i]=='1'){
				flag=1;break;
			}
		}
		if(flag==1)printf("NO\n");
		else printf("YES\n");
	}

    return 0;
}
