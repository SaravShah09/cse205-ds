class Solution {
public:
    string frequencySort(string s) {
        int i, flag=0, max=0;
        char c;
        string ans="";
        unordered_map<int,int> mp;
        for(i=0 ; i<s.length() ; i++)
        {
            mp[s[i]]++;
        }
        while(true)
        {
            max=0;
            flag=0;
            for(auto it:mp)
            {
                if(it.second>0)
                {
                    flag=1;
                }
                if(it.second>max)
                {
                    max = it.second;
                    c = it.first;
                }
            }
            if(flag==0)
            {
                break;
            }
            else
            {
                for(i=0 ; i<max ; i++)
                {
                    ans += c;
                }
                mp[c] = 0;
            }
        }
        return ans;
    }
};