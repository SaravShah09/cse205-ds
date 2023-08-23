class Solution {
public:
    int findNumbers(vector<int>& nums) {
        string n;
        int j=0;
        for (int i=0; i<nums.size(); i++)
        {
            n = to_string(nums[i]);
            if(n.size()%2 == 0)
            {
                j=j+1;
            }
        }
        return j;

    }   
};