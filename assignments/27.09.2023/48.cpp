class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int a = matrix.size();
        int b = matrix[0].size();
        vector<vector<int>> newmatrix(b, vector<int>(a));
        for(int i=0; i<a; i++)
        {
            for(int j=0; j<b; j++)
            {
                newmatrix[i][j] = matrix[j][i];
            }
        }
        for (int j=0; j<a; j++)
        {
            for(int i=0; i<b/2; i++)
            {
                swap(newmatrix[j][i], newmatrix[j][newmatrix.size()-1-i]);
            }
        }
        
        matrix = newmatrix;
    }
};