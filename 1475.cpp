#include <bits/stdc++.h>
using namespace std;

// 1475. Final Prices With a Special Discount in a Shop
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
    	vector<int> ans;

        for (int i=0 ; i<prices.size() ; ++i){
        	int value = prices[i];
        	auto it = find_if(prices.begin()+i+1,prices.end(),[value] (int x) {
        		return x <= value;
        	});

        	if (it != prices.end())
        		ans.push_back(value-*it);
        	else ans.push_back(value);
        }

        return ans;
    }
};

int main(){    
    Solution slt;
	// vector<int> prices = {8,4,6,2,3};
	// vector<int> prices = {1,2,3,4,5};
	vector<int> prices = {10,1,1,6};

	vector<int> ans = slt.finalPrices(prices);

	for (auto x : ans) cout << x << ' ';
	return 0;
}