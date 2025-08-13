class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //not my solution
        unordered_set<string>st;
        int n=board.size();
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]=='.')continue;
            string row=string(1,board[i][j])+"r"+to_string(i);
            string col=string(1,board[i][j])+"c"+to_string(j);
            string box=string(1,board[i][j])+"b"+to_string(i/3)+"_"+to_string(j/3);
            if(st.find(row)!=st.end() || st.find(col)!=st.end() || st.find(box)!=st.end())return false;
            st.insert(row);
            st.insert(col);
            st.insert(box);
        }
        }
        return true;
    }
};
