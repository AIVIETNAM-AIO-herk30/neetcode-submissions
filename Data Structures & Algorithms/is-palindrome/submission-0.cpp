class Solution {
public:
    bool isPalindrome(string s) {
    string res="";
    for (int i=0;i<s.length();i++){
        if (s[i]>=32 && s[i]<=47 || s[i]>=58 && s[i]<=64) continue;
        if (s[i]>='A' && s[i]<='Z') s[i]+=32;
        res+=s[i];
    } 
    int left = 0;
    int right = res.length()-1;
    while (left<right){
        if (res[left] == res[right]){
            left++;
            right--;
        }
        else{
            return false;
            break;
        }
    }
    return true;
    }
};
