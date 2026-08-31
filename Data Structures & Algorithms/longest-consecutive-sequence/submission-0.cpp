class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         int longest = 0;
    unordered_set<int> set(nums.begin(),nums.end());
    for (int i=0;i<nums.size();i++){
        if (!set.count(nums[i]-1)){
            int current=nums[i];
            int currentstreak = 1;
            while (set.count(current+1)){
                current+=1;
                currentstreak+=1;
            }
            longest = max(longest, currentstreak);
        }
    }
    return longest;
    }
};
