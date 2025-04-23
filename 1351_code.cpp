class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size(), r = m - 1, c = 0;
        int result = 0;
        while (r >= 0 && c < n) {
            if (grid[r][c] >= 0) {  
            c++;

            
        }else{
            result += (n - c);
            r--;
        }
    }
    return result;
    }
};
