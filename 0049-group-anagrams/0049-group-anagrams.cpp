class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        int n=strs.size();

        vector<vector<string>> result;
        unordered_map<string,vector<string>> mp;

        for(auto x : strs)
        {
            string key=x;
            sort(key.begin(),key.end());
            mp[key].push_back(x);

        }
        for(auto it : mp)
        {
            result.push_back(it.second);
        }
        return result;
    }
};

      
