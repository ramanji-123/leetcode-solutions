class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
         vector<int> ans(seq.size());
        int a=0;
        for(int i=0;i<seq.size();++i) {
            if (seq[i]=='(') {
                ++a;
                ans[i]=a%2;
            } else {
                ans[i]=a%2;
                --a;
            }
        }
        return ans;
    }
};