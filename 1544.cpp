#include <bits/stdc++.h>
using namespace std;

// 1544. Make The String Great
class Solution {
public:
    string makeGood(string s) {
        stack<char> st;

        for (char c : s){
        	if (!st.empty()){
        		char x = st.top();

        		if (abs(x-c) == 32)
        			st.pop();
        		else st.push(c);
        	}
        	else st.push(c);
        }

        string t="";
        int len = st.size();
        while(!st.empty()){
        	t = st.top() + t;
        	st.pop();
        }

        return t;
    }
};

int main(){    
    Solution slt;
	string s="leEeetcode";
	// string s = "abBAcC";

	cout << slt.makeGood(s);

	return 0;
}