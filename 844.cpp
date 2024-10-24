#include <bits/stdc++.h>
using namespace std;

// 844. Backspace String Compare
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> ss;
        stack<char> tt;

        for (char c : s){
        	if (c=='#'){
        		if (!ss.empty()) ss.pop();
        	}
        	else ss.push(c);
        }

        for (char c : t){
        	if (c=='#'){
        		if (!tt.empty()) tt.pop();
        	}
        	else tt.push(c);
        }

        if (ss.size() != tt.size())
        	return false;
        else {
        	while(!ss.empty()){
        		if (ss.top() != tt.top())
        			return false;
        		else {
        			ss.pop();
        			tt.pop();
        		}
        	}
        }

        return true;
    }
};

int main(){    
    Solution slt;
	string s,t; 
	s = "a###";
	t = "c#da";

	cout << slt.backspaceCompare(s,t);
	return 0;
}