#include <bits/stdc++.h>
using namespace std;

// 1598. Crawler Log Folder
class Solution {
public:
    int minOperations(vector<string>& logs) {
        int res = 0;

        for (string s : logs)
        	if (s == "../"){
        		if (res>0) --res;
        	}
        	else if (s == "./") continue;
        	else ++res;

        return res;
    }
};

int main(){    
    Solution slt;
	vector<string> logs = {"./","../","./"};

	cout << slt.minOperations(logs);

	return 0;
}