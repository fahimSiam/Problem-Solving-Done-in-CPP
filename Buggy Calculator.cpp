#include <bits/stdc++.h>

using namespace std;

    int main() {
    int x,t,a,b,sum,i,p;
    x=0;
    scanf("%d",&t);
    while(x<t){
        scanf("%d",&a);
        scanf("%d",&b);
        sum=0;
        i=0;
    while(a!=0||b!=0){
        p=(a%10+b%10)%10;
        sum=sum+p*(pow(10,i));
        a=a/10;
        b=b/10;
        i++;
    }
    x++;
    printf("%d\n",sum);
    }
    return 0;
}
