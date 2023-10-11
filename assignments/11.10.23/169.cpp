class Solution {
public:

    int majorityElement(vector<int>& nums) {
        int a;
        int count =0 ;
        for (int i=0; i<nums.size(); i++)
        {
            if (count == 0)
            {
                a = nums[i];
                count = 1;
            }
            else if(a == nums[i])
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return a;
    }
};