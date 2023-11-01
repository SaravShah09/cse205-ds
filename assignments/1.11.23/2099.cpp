class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
  
        priority_queue<pair<int,int>> pq;
        vector<int> v,v1;
   
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
        }

        pair<int,int> temp;
        while(k--){
            temp = pq.top();
            v.push_back(temp.second);
            pq.pop();
        }

        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            v1.push_back(nums[v[i]]);
        }

        return v1;
    }
};