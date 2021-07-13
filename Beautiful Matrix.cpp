#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool matrix[5][5];
    int x,y,out;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin>>matrix[i][j];
            if(matrix[i][j] == 1){
                x = i;
                y = j;
            }
        }
    }

    out= abs(x-2) + abs(y-2);
    cout<<out<<endl;

    return 0;
}
