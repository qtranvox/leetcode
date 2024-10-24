#include <bits/stdc++.h>
using namespace std;

// 2073. Time Needed to Buy Tickets
// class Solution { //using queue
// public:
//     int timeRequiredToBuy(vector<int>& tickets, int k) {
//         int times = 0;
//         queue<int> q;

//         for (int x : tickets) q.push(x);

//         while(!q.empty()){
//         	int val = q.front();
//             ++times; 
//             --val;
//             q.pop();

//             if (val > 0) q.push(val);

//         	if (k==0){
//         		if (val == 0)
//         			return times;

//         		k = q.size()-1;
//         	}
//         	else --k;
//         }

//         return times;
//     }
// };

class Solution { //using deque
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int times = 0;
        deque<int> q;

        for (int x : tickets) q.push(x);

        while(!q.empty()){
            int val = q.front();
            ++times; 
            --val;
            q.pop();

            if (val > 0) q.push(val);

            if (k==0){
                if (val == 0)
                    return times;

                k = q.size()-1;
            }
            else --k;
        }

        return times;
    }
};

int main(){    
    Solution slt;
	vector<int> tickets = {2,3,2}; 
	int k = 2;

    cout << slt.timeRequiredToBuy(tickets,k);
	return 0;
}