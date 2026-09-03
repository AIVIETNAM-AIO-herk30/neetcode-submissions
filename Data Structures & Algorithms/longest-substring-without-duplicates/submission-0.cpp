class Solution {
public:
    int lengthOfLongestSubstring(string s) {
            unordered_set<char> set;
    int left = 0;
    int max_streak = 0;
    for (int i =0 ;i<s.length();i++){
        while (set.count(s[i])){
            set.erase(s[left]);
            left++;
        }
        set.insert(s[i]); 
        int count_streak = i-left+1;
        max_streak = max(max_streak,count_streak);
    }
    return max_streak;
    }
};
