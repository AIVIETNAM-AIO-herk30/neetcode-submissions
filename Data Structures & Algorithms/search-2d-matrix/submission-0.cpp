class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
           vector<int> flatten;
    bool result = false;
    for (int i =0 ;i<matrix.size();i++){
        for (int j =0 ;j<matrix[0].size();j++){
            flatten.push_back(matrix[i][j]);
        }
    }
    int left =0 ;
    int right = flatten.size()-1;
    while (left<=right){
        int mid = left +(right-left)/2;
        if (flatten[mid] == target){
            result = true;
            break;
        }
        else if (flatten[mid]<target){
            left = mid+1;
        }
        else{
            right = mid -1;
        }
    }
    return result;
    }
};
