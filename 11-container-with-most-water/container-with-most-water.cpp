class Solution {
public:
    int maxArea(vector<int>& height) {
        int high = height.size()-1;
        int low = 0;
        int ans = 0;
        int curr;
        while(low<=high){
            int len = min(height[low],height[high]);
            int bre = high-low;
            curr = len * bre;
            ans = max(ans,curr);
            if(height[high]>height[low]){
                low++;
            }
            else{
                high--;
            }
        }
        return ans;
    }
};