class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int i;
        int c=0;
        unordered_map<int,int>map;
        for(i=0; i<nums.size(); i++)
        {
            if(map.find(nums[i])!=map.end())
                c = c + map[nums[i]];
                map[nums[i]]++;
        }
        return c;
    }
};