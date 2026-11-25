class Solution {
public:
    int numTilings(int n) {
        vector<long long>dp(n,0);
        vector<long long>p(n,0);
        long long MOD=1e9+7;
        if(n==1)return 1;
        dp[0]=1;
        dp[1]=2;
        p[0]=1;
        p[1]=2;
        for (int i=2;i<n;i++){
            dp[i]=(dp[i-1]+dp[i-2]+2*p[i-2])% MOD;
            p[i]=(p[i-1]+dp[i-1])% MOD;
        }
        return dp[n-1]%(MOD);
    }
};