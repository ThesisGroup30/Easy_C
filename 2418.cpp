class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<pair<int, string>> people(n);
        
        for (int i = 0; i < n; i++) {
            people[i] = {heights[i], names[i]};
        }
        
        sort(people.rbegin(), people.rend());
        
        vector<string> res(n);
        for (int i = 0; i < n; i++) {
            res[i] = people[i].second;
        }
        
        return res;
    }
};
