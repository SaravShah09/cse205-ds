class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
         vector<int> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int rsum=(((n)*(n+1))/2);
        int t;
        long long int sum=0;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                t=nums[i];
                ans.push_back(nums[i]);
            }
            sum += nums[i];
        }
        sum+= nums[0];
        ans.push_back(t+rsum-sum);
        return ans;
    }
};