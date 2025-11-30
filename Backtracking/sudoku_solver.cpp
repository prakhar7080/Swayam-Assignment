class Solution {
public:

    bool valid(vector<vector<char>> &b , int r , int c , char ch){

        for(int k=0 ; k<9 ; k++){
            if(b[r][k] == ch) return false;
            if(b[k][c] == ch) return false;
        }

        int x = (r/3)*3 , y = (c/3)*3;

        for(int i=x ; i<x+3 ; i++){
            for(int j=y ; j<y+3 ; j++){
                if(b[i][j] == ch) return false;
            }
        }

        return true;
    }


    bool solve(vector<vector<char>> &b){

        for(int i=0 ; i<9 ; i++){
            for(int j=0 ; j<9 ; j++){

                if(b[i][j] == '.'){

                    for(char ch='1' ; ch<='9' ; ch++){
                        if(valid(b,i,j,ch)){
                            b[i][j] = ch;
                            if(solve(b)) return true;
                            b[i][j] = '.';
                        }
                    }
                    return false;
                }
            }
        }

        return true;
    }


    void solveSudoku(vector<vector<char>> &b){
        solve(b);
    }

};
