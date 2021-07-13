#include<bits/stdc++.h>
using namespace std;


int main() { 
    int T;
    cin >> T;
    vector<int> nums(T, 0);
    int maxn = 0;
    for(int i=0; i<T; ++i) {
        cin >> nums[i];
        maxn = ( maxn<nums[i] ? nums[i] : maxn);
    }
    
    vector<bool> dp(maxn+1, false);
    dp[2] = true;
    dp[3] = true;
    dp[4] = true;
    dp[5] = true;
    for(int i=6; i<=maxn; ++i)
    {
        dp[i] = !( dp[i-2] && dp[i-3] && dp[i-5] );        
    }
    
    for(int i=0; i<T; ++i){
        if ( dp[nums[i]] )
            cout << "First\n";
        else
            cout << "Second\n";
    }
    return 0;
}
