#include <bits/stdc++.h>

using namespace std;

int main()
{
char str[105];
    scanf("%s",str);
    int num[28]={0};
    for(int i=0;i<strlen(str);i++){
        num[str[i]-97]++;
    }
    int count=0;
    for(int i=0;i<27;i++)
    {
        if(num[i]>0){
            count++;
        }
    }
    count%2==0?printf("CHAT WITH HER!\n"):printf("IGNORE HIM!\n");
}
