class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> starts; // set of starting cities
        unordered_set<string> ends; // set of ending cities
        
        // Iterate over paths and add cities to respective sets
        for (const auto& path : paths) {
            starts.insert(path[0]);
            ends.insert(path[1]);
        }
        
        // Iterate over ends set and return the first city not in starts set
        for (const auto& city : ends) {
            if (!starts.count(city)) {
                return city;
            }
        }
        
        return ""; // This line will never be executed since it's guaranteed that there is exactly one destination city.
    }
};
