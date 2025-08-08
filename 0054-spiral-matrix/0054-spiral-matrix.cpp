class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int colBegin = 0, colEnd = n-1;
        int rowBegin = 0, rowEnd = m-1; 

        while(rowBegin <= rowEnd && colBegin <= colEnd){
            // Traverse left
        for(int i = colBegin; i <= colEnd; i++){
            ans.push_back(matrix[rowBegin][i]);
        }
        rowBegin++;

        // Traverse Down
        for(int i = rowBegin; i <= rowEnd; i++){
            ans.push_back(matrix[i][colEnd]);
        }

        colEnd--;
        // Traverse Left
        if(rowBegin <= rowEnd){
            for(int i = colEnd; i >= colBegin; i--){
            ans.push_back(matrix[rowEnd][i]);
        }
            rowEnd--;
        }
        // Traverse Up
        if(colBegin <= colEnd){
            for(int i = rowEnd; i >= rowBegin; i--){
            ans.push_back(matrix[i][colBegin]);
        }
        colBegin++;
        }
        
        }
        
        return ans;
    }
};