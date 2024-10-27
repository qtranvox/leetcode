#include <bits/stdc++.h>
using namespace std;

// 125. Valid Palindrome
// class Solution {
// public:
//     bool isPalindrome(string s) {
//         vector<char> str;

//         for(char c : s){
//         	if (65 <= c && c <= 90){
//         		str.push_back(char(c+32)); 
//         	}
//         	else if ((97 <= c && c <= 122) || (48 <= c && c <= 57)){
//         		str.push_back(c);
//         	}
//         }
//         // for (char c : str){cout << c << ' ';}

//         int len = str.size();
//         if (len == 0) return true;

//         for (int i=0 ; i<=len/2 ; ++i){
//         	if (str[i] != str[len-i-1])
//         		return false;
//         }

//         return true;
//     }
// };

/*This Solution below is Code Sample of Leetcode*/
class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0, end = s.size() - 1;

        while (start < end)
        {
            if (!isalnum(s[start]))
            {
                start++;
                continue;
            }
            if (!isalnum(s[end]))
            {
                end--;
                continue;
            }

            if (tolower(s[start]) != tolower(s[end]))
                return false;
            start++;
            end--;            
        }
        return true;
    }
};

int main(){    
    Solution slt;
	string s = "A man, a plan, a canal: Panama"; cin >> s;

	cout << slt.isPalindrome(s);

	return 0;
}