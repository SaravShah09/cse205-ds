class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans ;

        int rows = matrix.size(), col = matrix[0].size() ;

        int moves = rows/2 ;
        int r = -1, c = -1 ;

        int i = 0 ;

        while(i <= moves){


            r++ ; c++ ;

            if(c >= col - i){
                break ;
            }

            while(c < col - i){
                ans.push_back(matrix[r][c]) ;
                c++ ;
            }

            c-- ; r++ ;

            if(r >= rows - i){
                break ;
            }

            while(r < rows - i){
                ans.push_back(matrix[r][c]) ;
                r++ ;
            }

            r-- ; c-- ;

            if(c < i){
                break ;
            }

            while(c >= i){
                ans.push_back(matrix[r][c]) ;
                c-- ;
            }


            c++ ; r-- ;

            if(r <= i){
                break ;
            }

            while(r > i){
                ans.push_back(matrix[r][c]) ;
                r-- ;
            }

            i++ ;
        }

        return ans ;
    }
};