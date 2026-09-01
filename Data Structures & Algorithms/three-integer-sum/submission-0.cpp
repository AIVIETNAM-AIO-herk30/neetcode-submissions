class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
               sort(nums.begin(),nums.end());
    vector<vector<int>> res;
    for(int i =0 ;i<nums.size();i++){
        int left = i+1;
        int right = nums.size()-1;
                if (i>0 && nums[i]==nums[i-1]){
            continue;
        }
        while (left<right){
            int sum = nums[left]+nums[right]+nums[i];
            if (sum==0){
                res.push_back({nums[left],nums[right],nums[i]});
                left++;
                right--;
                while (left<right && nums[left-1]==nums[left]){
                    left++;
                }
            }
            else if (sum<0){
                left++;
            }
            else{
                right--;
            }
        }
    }
    return res;
    }
};
