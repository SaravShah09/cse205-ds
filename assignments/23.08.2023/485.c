class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int j=0;
        int a=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==1)
            {
                a = a + 1;
            
                if(a>j)
                {
                    j=a;
                }
            }
            else
            {
                a=0;
            }
        }
        return j;
    }
};