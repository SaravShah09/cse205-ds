class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> q;
        for(int i=0; i<nums.size(); i++)
        {
            q.push(nums[i]);
        }
        int c=0;
        while(c!=k-1)
        {
            q.pop();
            c++;
        }
        return q.top();
    }
};