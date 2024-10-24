#include <bits/stdc++.h>
using namespace std;

// 1700. Number of Students Unable to Eat Lunch
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for (int i : students) q.push(i);

        stack<int> st;
        for (auto it=sandwiches.rbegin() ; it!= sandwiches.rend() ; ++it) 
            st.push(*it);

        int cnt=0;
        while(!q.empty() && cnt < q.size()){
            if (q.front() == st.top()){
                cnt = 0;
                st.pop();
            }
            else {
                ++cnt;
                q.push(q.front());
            }
            q.pop();
        }

        return q.size();
    }
};

int main(){    
    Solution slt;
	vector<int> students = {1,1,1,0,0,1};
	vector<int> sandwiches = {1,0,0,0,1,1};

	cout << slt.countStudents(students,sandwiches);

	return 0;
}