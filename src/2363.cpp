class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        unordered_map<int, int> valueToWeightMap;
        
        // Add items from items1 to the map
        for (const auto& item : items1) {
            valueToWeightMap[item[0]] += item[1];
        }
        
        // Add items from items2 to the map
        for (const auto& item : items2) {
            valueToWeightMap[item[0]] += item[1];
        }
        
        // Convert the map to a vector
        vector<vector<int>> ret;
        for (const auto& [value, weight] : valueToWeightMap) {
            ret.push_back({value, weight});
        }
        
        // Sort the vector by value in ascending order
        sort(ret.begin(), ret.end(), [](const auto& a, const auto& b) {
            return a[0] < b[0];
        });
        
        return ret;
    }
};
