class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j= size(height) -1;
        int maxProd = 0;
        while(i<j){
            int minHeight = min(height[i],height[j]);
            int width = j-i;
            int area = minHeight*width;

            if(area>maxProd) maxProd = area;

            if(height[i]>height[j]){
                j--;
            }else i++;
        }
        return maxProd;
    }
};