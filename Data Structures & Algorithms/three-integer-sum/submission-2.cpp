class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        set<vector<int>> st;

        for(int i=0; i<nums.size()-2; i++){

            int l=i+1 , h=nums.size()-1;
            while(l<h){
            int sum = nums[i] + nums[l] + nums[h];
                if(sum == 0){
                    st.insert({nums[i],nums[l] , nums[h]});
                    l++;
                    h--;
                }
                else if(sum > 0){
                    h--;
                }
                else{
                    l++;
                }
            }
        }
        vector<vector<int>> res;
        for(auto x:st){
            res.push_back(x);
        }
        return res;
    }
};
