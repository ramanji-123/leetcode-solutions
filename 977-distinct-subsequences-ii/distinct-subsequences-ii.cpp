class Solution {
public:
    int distinctSubseqII(string s) {
        const long long MOD = 1e9 + 7;

        vector<long long> last(26, 0);

        long long dp = 1;   // empty subsequence

        for (char c : s) {
            int index = c - 'a';

            long long newDp = (2 * dp - last[index] + MOD) % MOD;

            last[index] = dp;
            dp = newDp;
        }

        return (dp - 1 + MOD) % MOD;
    }
};