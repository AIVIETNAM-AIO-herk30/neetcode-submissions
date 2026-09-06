class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> map;
        int left = 0;
        int max_freq = 0;
        int max_len = 0; // Biến giữ kỷ lục chiều dài cửa sổ lớn nhất

        for (int i = 0; i < s.length(); i++) {
            // Bước 1: Mở rộng cửa sổ, ghi chép chữ cái mới
            map[s[i]]++; 
            max_freq = max(max_freq, map[s[i]]); 

            // Bước 2: Thu hẹp nếu cửa sổ vi phạm quy tắc
            // (Chiều dài cửa sổ hiện tại) - (Chữ cái nhiều nhất) > phép thuật k
            while ((i - left + 1) - max_freq > k) {
                map[s[left]]--; // Trừ số lượng chữ cái bị loại
                left++;         // Nhích mép trái sang phải
            }

            // Bước 3: Cửa sổ lúc này chắc chắn đã hợp lệ, đo chiều dài và lưu kỷ lục!
            max_len = max(max_len, i - left + 1);
        }

        return max_len;
    } 
};