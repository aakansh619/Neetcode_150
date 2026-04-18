class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int low=0;
        int n=height.size();
        int high =n-1;
        while(low<high)
        {
            int width = high-low;
            int h=min(height[low],height[high]);
            int water=width*h;
            ans=max(ans,water);
            height[low]<height[high]?low++:high--;
        }
        return ans;
        
    }
};