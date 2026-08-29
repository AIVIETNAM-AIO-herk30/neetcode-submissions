class Solution {
public:
    vector<int> le(string a){
        vector<int> all(26,0);
        for (char c:a){
            all[c-97]++;
        }
        return all;
    }
    bool isAnagram(string s, string t) {
        if (le(s)==le(t)) return true;
        else return false;
    }
};
