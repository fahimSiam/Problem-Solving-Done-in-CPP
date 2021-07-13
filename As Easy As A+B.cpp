#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;
int main(){
    int t,i,j,a[1000];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&j);
        for(i=0; i<j; i++){
            scanf("%d",&a[i]);
        }
        sort(a,a+i);
        for(i=0; i<j; i++){
            if(i==j-1){
                printf("%d",a[i]);
            }
            if(i<j-1){
                printf("%d",a[i]);
                printf(" ");
            }

        }
                printf("\n");

        }

    return 0;
}
