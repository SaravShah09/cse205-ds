class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int a = accounts.size();
        int b = accounts[0].size();
        int maxsum=0;
     
        for(int i=0; i<a; i++)
        {
            int sum=0;
            for(int j=0; j<b; j++)
            {
                sum = sum + accounts[i][j];
            }
            if(maxsum<sum)
            {
                maxsum = sum;
            }
        }
        return maxsum;
    }

};