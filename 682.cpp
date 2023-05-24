class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> s;
        int sum = 0;
        for (string op : ops) {
            if (op == "+") {
                int prev1 = s.top(); s.pop();
                int prev2 = s.top(); s.push(prev1);
                s.push(prev1 + prev2);
                sum += prev1 + prev2;
            } else if (op == "D") {
                int prev = s.top();
                s.push(2 * prev);
                sum += 2 * prev;
            } else if (op == "C") {
                sum -= s.top(); s.pop();
            } else {
                int val = stoi(op);
                s.push(val);
                sum += val;
            }
        }
        return sum;
    }
};
