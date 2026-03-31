class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // int n=nums.size();
        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){
        //         if(nums[i] == nums[j]){
        //             return true;
        //         }
        //     }
        // }
        // return false;
        int n=nums.size();
        map<int,int> mp;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }

        for(auto x:mp){
            if(x.second > 1){
                return true;
            }
        }
        return false;
    }
};