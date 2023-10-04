class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        int a = matrix.size();
        int b = matrix[0].size();
        vector<vector<int>> newmatrix(b, vector<int>(a)) ;
        for(int i=0; i<a; i++)
        {
            for(int j=0; j<b; j++)
            {
                newmatrix[j][i] = matrix[i][j];
            }
        }
        return newmatrix;
    }
};