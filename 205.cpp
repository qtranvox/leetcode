#include <bits/stdc++.h>
using namespace std;

// 205. Isomorphic Strings
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> ss;
        map<char,char> tt;
        for (int i=0 ; i<s.size() ; ++i){
        	ss[s[i]] = ' ';
        	tt[t[i]] = ' ';
        }

        for (int i=0 ; i<s.size() ; ++i){
        	if (ss[s[i]] == tt[t[i]] && ss[s[i]] == ' '){
        		ss[s[i]] = t[i];
        		tt[t[i]] = s[i];
        	}
        	if (ss[s[i]] != t[i] || tt[t[i]] != s[i]) 
        		return false;
        }

        return true;
    }
};

int main(){    
    Solution slt;
	string s,t; 
	cin >> s >> t;

	cout << slt.isIsomorphic(s,t);

	return 0;
}