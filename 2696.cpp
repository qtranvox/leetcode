#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    // 2696. Minimum String Length After Removing Substrings

    // using vector
    // int minLength(string s) { 
    // 	bool loop = true;

    //     vector<char> v(s.begin(), s.end());
    //     vector<char>::iterator it;

    //     while (loop){
    //         loop = false;

    //         for (it = v.begin() ; it<v.end()-1 ; ++it){
    //             while ( (it < v.end()-1) && (( (*it=='A') && (*(it+1)=='B') ) || ( (*it=='C') && (*(it+1)=='D') ) ) ) {
    //                 v.erase(it,it+2);
    //                 loop = true;
    //             }
    //         }
    //     }

    //     // for (it = v.begin() ; it!=v.end() ; ++it)
    //     //     cout << *it << ' ';

    //     return v.size();

    // }

    // using stack --> faster
    int minLength(string s){ 
        stack<char> st;
        st.push(' ');
        for (int i=0 ; i<s.size() ; ++i){
            if (((s[i]=='B') && (st.top()=='A')) || ((s[i]=='D') && (st.top()=='C'))){
                st.pop();
            }
            else st.push(s[i]);
        }

        return st.size()-1;
    }
};

int main(){
	Solution slt;
	string s; cin >> s;

	cout << slt.minLength(s);

	return 0;
}