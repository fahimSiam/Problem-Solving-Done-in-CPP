#include <bits/stdc++.h>

using namespace std;

int main(){
    long int  a[10],t,x,num,i,j,mod,div,k;
    while(scanf("%ld", &t)>=1){
        for(i=1;i<=t;i++){
            for(x=0;x<10;x++)
                a[x]=0;
            scanf("%ld",&num);
            for(j=1;j<=num;j++){
                div=j;
                while(div!=0){
                    mod=div%10;
                    div=div/10;
                    a[mod]+=1;
                }
            }
            for(k=0;k<10;k++){
                if(k<9)
                    printf("%ld ",a[k]);
                else
                    printf("%ld\n",a[k]);
            }
        }
    }
    return 0;
}
