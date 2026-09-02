class Solution {
public:
    int trap(vector<int>& height) {
            int count = 0;
    int left = 0 ;
    int right = height.size()-1;
    int left_max = 0;
    int right_max = 0;
    int smaller_max_height = 0;
    while (left<right){
        left_max = max(left_max,height[left]);
        right_max = max(right_max,height[right]);
        if (left_max<right_max){
            count+= left_max-height[left];
            left++;
        }
        else{
            count+=right_max-height[right];
            right--;
        }
    }   return count;
    }
};
