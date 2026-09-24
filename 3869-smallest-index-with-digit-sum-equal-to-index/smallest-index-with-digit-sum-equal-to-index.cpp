class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        
        for(int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            int total = 0;

            while(num > 0)
            {
                int val = num % 10;
                total += val;
                num = num / 10;
            }

            if(total == i)
            {
                return i;
            }
        }

        return -1;
    }
};