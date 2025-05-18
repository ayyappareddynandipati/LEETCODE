class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int total=0;
        while(l<r){
            int h = min(height[l],height[r]);
            int area=h*(r-l);
            total=max(total,area);
            if(height[l]<=height[r]){
                l++;
            }else{
                r--;
            }
        }
        return total;
    }
};