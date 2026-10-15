class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> prev;
        for(int row =0;row<=rowIndex;row++){
            vector<int> current(row+1,1);
            for(int col = 1;col<row;col++){
                current[col] = prev[col-1] + prev[col];
            }
            prev = current;
        }
        return prev;
    }
};