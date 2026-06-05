class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        vector<int> res;

        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }

        vector<pair<int,int>> neww(mp.begin() , mp.end());
        
        sort(neww.begin(), neww.end(), [](auto &a, auto &b){
        return a.second > b.second;
        });

        for(int i=0; i<k; i++){
            res.push_back(neww[i].first);
        }

        return res;
    }
};
