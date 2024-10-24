#include <bits/stdc++.h>
using namespace std;

// 387. First Unique Character in a String
class Solution {
public:
    int firstUniqChar(string s) {
    	map<char,int> m;

    	for (char c:s){
    		++m[c];
    	}

    	for (int i=0 ; i<s.size() ; ++i)
    		if (m[s[i]] == 1) return i;

    	return -1;
    }
};

int main(){    
    Solution slt;
	string s="leetcode";

	cout << slt.firstUniqChar(s);

	return 0;
}