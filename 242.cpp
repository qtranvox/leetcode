#include <bits/stdc++.h>
using namespace std;

// 242. Valid Anagram
class Solution {
public:
    bool isAnagram(string s, string t) {
    	if (s.size() != t.size())
			return false;

		int ss[256] = {0};
		int tt[256] = {0};
        
        for (int i=0 ; i<s.size() ; ++i){
            ++ss[s[i]];
            ++tt[t[i]];
        }

        for (int i=0 ; i<256 ; ++i)
        	if (ss[i] != tt[i])
        		return false;

        return true;
    }
};

int main(){    
    Solution slt;
	string s,t;
	cin >> s >> t;

	cout << slt.isAnagram(s,t);

	return 0;
}