class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int count[100001];
        for(int i = 0 ; i < 100001 ; i++)
            count[i] = 0;
            
        int n = arr.size();
        for(int i = 0 ; i < n ; i++)
        {
            count[arr[i]]++;
        }
        sort(count , count+100001);
        int sum = 0;
        int ans = 0;
        for(int i = 100000 ; i >= 0 ; i--)
        {
            if(count[i] != 0){
                sum+=count[i];
                ans++;
            }
            if(sum >= n/2)
                return ans;
        }
        
        return 0;
    }
};