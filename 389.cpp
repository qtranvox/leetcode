#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	// 389. Find the Difference
    char findTheDifference(string s, string t) {
        int ss = 0;
        int tt = 0;
        
        for (int i=0 ; i<s.size() ; ++i){
            ss += s[i];
            tt += t[i];
        }
        tt += t[s.size()];

        return char(tt-ss);
    }
};

int main(){    
    Solution slt;
	string s,t;
	cin >> s >> t;

	cout << slt.findTheDifference(s,t);

	return 0;
}