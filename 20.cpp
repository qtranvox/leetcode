#include <bits/stdc++.h>
using namespace std;

// 20. Valid Parentheses
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (int i=0 ; i<s.size() ; ++i){
        	if ((s[i]=='(') || (s[i]=='[') || (s[i]=='{'))
        		st.push(s[i]);
        	else {
        		if (st.empty())
        			return false;

        		if ((st.top()!='(' && s[i]==')') || (st.top()!='[' && s[i]==']') || (st.top()!='{' && s[i]=='}'))
        			return false;
        		st.pop();
        	}
        }

        if (st.empty()) return true;
        return false;
    }
};

int main(){    
    Solution slt;
	string s="()[]{}";
	cout << slt.isValid(s);

	return 0;
}