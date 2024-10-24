#include <bits/stdc++.h>
using namespace std;

// 2540. Minimum Common Value
// class Solution {
// public:
//     int getCommon(vector<int>& nums1, vector<int>& nums2) {
//         int len;
//         if (nums1.size() <= nums2.size())
//         	len = nums1.size();
//         else len = nums2.size();

//         map<int,int> m1, m2;

//         for (auto x : nums1) m1[x] = 1;
//         for (auto x : nums2) m2[x] = 1;

//         for (int i=0 ; i<len ; ++i){
//         	if (m1[nums2[i]]==1) return nums2[i];
//         	if (m2[nums1[i]]==1) return nums1[i];
//         }

//         return -1;
//     }
// };

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i,j; i=j=0;
        while(i<nums1.size() && j<nums2.size()){
        	if (nums1[i] == nums2[j]) return nums1[i];

        	if (nums1[i] < nums2[j]) ++i;
        	else ++j;
        }

        return -1;
    }
};

int main(){    
    Solution slt;
	vector<int> nums1 = {34,225,328,530,823,834,902,989};
	vector<int> nums2 = {24,30,115,121,160,173,239,265,335,362,449,557,597,624,697,766,775,881,898,919};

	cout << slt.getCommon(nums1,nums2);

	return 0;
}