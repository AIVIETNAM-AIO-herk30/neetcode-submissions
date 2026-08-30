class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
                    unordered_map<int,int> un_map;
    priority_queue<pair<int,int>> pq;
    vector<int> result;
    for (int i = 0;i <nums.size();i++){
        un_map[nums[i]]++;
    }

    for (auto& p:un_map){
        pq.push({p.second,p.first});
    }
    for (int i =0 ; i<k;i++){
        int res = pq.top().second;
        result.push_back(res);
        pq.pop();
    }
    return result;
    }
};
