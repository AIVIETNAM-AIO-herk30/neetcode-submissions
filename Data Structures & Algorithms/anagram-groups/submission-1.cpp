class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        unordered_map<string,vector<string>> strr;
        vector<vector<string>> result;
        for (string& strs : str){
            vector<int> count(26,0);
            for (char c : strs){
                count[c-97]++;
            }
            string key = "";
            for (int i =0 ;i<26;i++){
                key = key +to_string(count[i])+"#";
            }
            strr[key].push_back(strs);              
        }
        for (auto& p:strr){
            result.push_back(p.second);
        }
        return result;
    }
};
