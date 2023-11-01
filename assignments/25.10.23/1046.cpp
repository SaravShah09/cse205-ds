class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;
        for(int i=0; i<stones.size(); i++)
        {
            q.push(stones[i]);
        }
        while(q.size()!=1 && q.size())
        {
            
            
                int x=q.top();
                q.pop();
                int y=q.top();
                q.pop();
                if(x==y)
                {
                    q.push(0);
                }
                if(x!=y)
                {
                    int a = x-y;
                    
                    q.push(a);
                }
            }
            if(q.size())
            {
                return q.top();
            }
            return 0;
    }
};