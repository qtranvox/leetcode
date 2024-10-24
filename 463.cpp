#include <bits/stdc++.h>
using namespace std;

// 463. Island Perimeter
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans = 0;

        int row = grid.size();
        int col = grid[0].size();

        for (size_t i=0 ; i<row ; ++i)
        	for (size_t j=0 ; j<col ; ++j)
        		if (grid[i][j] == 1) {
        			ans += 4;

        			if ((i>0) && (grid[i-1][j] == 1)) ans -= 2;
	        		if ((j>0) && (grid[i][j-1] == 1)) ans -= 2;
        		}       	

        return ans;
    }
};

int main(){    
    Solution slt;
	vector<vector<int>> grid = {
		{0,1,0,0},
		{1,1,1,0},
		{0,1,0,0},
		{1,1,0,0}
	};
	// vector<vector<int>> grid = {{0,1}};

	cout << slt.islandPerimeter(grid);
}