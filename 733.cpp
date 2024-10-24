#include <bits/stdc++.h>
using namespace std;

// 733. Flood Fill
class Solution {
public:
	void Try(vector<vector<int>>& image, int sr, int sc, int color, int value){
		int row = image.size();
        int col = image[0].size();

		int dx[4] = {1,0,-1,0};
		int dy[4] = {0,-1,0,1};

		for (int i=0 ; i<4 ; ++i){
			int x = sr + dx[i];
			int y = sc + dy[i];

			if (x<0 || x>row-1 || y<0 || y>col-1) 
				continue;

			// truong hop color == image[sr][sc] thi image se khong thay doi
			if (image[x][y] == value && image[x][y] != color){
				image[x][y] = color;
				Try(image,x,y,color,value);
			}
		}
	}

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int value = image[sr][sc];
        image[sr][sc] = color;
        Try(image,sr,sc,color,value);
        
        return image;
    }
};

int main(){    
    Solution slt;
	vector<vector<int>> image = {{1,1,1},{1,1,0},{1,0,1}};
	int sr,sc,color;
	sr = 1; sc = 1; color = 2;

	vector<vector<int>> ans = slt.floodFill(image,sr,sc,color);

	for (int i=0; i<3 ; ++i){
		for (int j=0; j<3 ; ++j)
			cout << ans[i][j] << ' ';
		cout << endl;
	}
	return 0;
}