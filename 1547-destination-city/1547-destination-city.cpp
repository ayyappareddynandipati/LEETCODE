class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        string destCity = paths[0][1] ;
        for ( int i = 0 ; i < paths.size() ; i++ ) {
            if ( paths[i][0] == destCity ) {
                destCity = paths[i][1] ;
                i = 0 ;
            }
        }
        return destCity ;       
    }
};