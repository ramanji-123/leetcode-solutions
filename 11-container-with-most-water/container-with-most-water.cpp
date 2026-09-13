class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int lt=0,rt=height.size()-1;
        while(lt<rt){
            int weigth=rt-lt;
            int ht=min(height[rt],height[lt]);
            int cw=weigth*ht;
            ans=max(ans,cw);
            
            height[lt]<height[rt]?lt++:rt--;

        }
        return ans;
    }
};