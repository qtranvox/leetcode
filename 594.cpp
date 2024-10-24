#include <bits/stdc++.h>
using namespace std;

// 594. Longest Harmonious Subsequence
class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int> mp;

        for (int x : nums) ++mp[x];

        int maxLen = 0;
    	map<int,int>::iterator it,itPre;
    	it = itPre = mp.begin();
    	++it;

    	while (it!=mp.end()){
    		if ( it->first - itPre->first == 1 ){
    			int val = itPre->second + it->second;
    			maxLen = max(maxLen,val);
    		}

    		itPre = it; ++it;
    	}

    	return maxLen;
    }
};

int main(){    
    Solution slt;
	vector<int> nums = {1,3,2,2,5,2,3,7};

	cout << slt.findLHS(nums);

	return 0;
}