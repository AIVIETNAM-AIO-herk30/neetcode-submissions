class Solution {
public:
    bool checkInclusion(string s1, string s2) {
            int n= s1.length();
    int sum = 0;
    unordered_map<char,int> map1;
    unordered_map<char,int> map2;
    for (int i =0 ;i<n;i++){
        map1[s1[i]]++;
    }
    int left = 0;
    int count = 0;
    for (int i=0;i<s2.length();i++){
        map2[s2[i]]++;
        if (i-left+1>n){
            map2[s2[left]]--;
            if (map2[s2[left]]==0){
                map2.erase(s2[left]);
            }
            left++;
        }
        if (map1 == map2){
            return true;
        }
    }
    return false;
    }
};
