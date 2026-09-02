class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
            unordered_set<int> set(nums.begin(),nums.end());
    int max_count = 0;
    for (int i=0;i<nums.size();i++){
        if(!set.count(nums[i]-1)){
            int current_num = nums[i];
            int current_streak = 1;
            while (set.count(current_num+1)){
                current_num+=1;
                current_streak+=1;
            }
            max_count = max(max_count,current_streak);
        }
    }
    return max_count;
    }
};
