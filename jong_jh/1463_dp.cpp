#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int num;
    cin>>num;
    vector<int> dp(num+1);

    dp[1] = 0;
    for(int i = 2; i < num+1;i++){
        dp[i] = dp[i-1] + 1;
        if(i%3==0) dp[i] = min(dp[i],dp[i/3] + 1);
        if(i%2==0) dp[i] = min(dp[i],dp[i/2] + 1);
    }

    cout << dp[num] <<endl;
}