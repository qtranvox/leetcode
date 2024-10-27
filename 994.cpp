#include <bits/stdc++.h>
using namespace std;


#define fi first
#define se second

// 994. Rotting Oranges
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int cnt = 0;
        vector<pair<int,int>> v;

        int m = grid.size();
        int n = grid[0].size();

        int fresh = 0;
        vector

        for (int i=0 ; i<m ; ++i)
        	for (int j=0 ; j<n ; ++j){

        	}

        return cnt;
    }
};

int main(){    
    Solution slt;
	vector<vector<int>> grid = {{2,1,1},{1,1,0},{0,1,1}};

	cout << slt.orangesRotting(grid);

	return 0;
}