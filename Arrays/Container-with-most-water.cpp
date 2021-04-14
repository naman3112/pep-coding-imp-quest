class Solution {
public:
    int maxArea(vector<int>& height) {
     int maxAns=-1;
        int start=0, end=height.size()-1;
        while(start<end){
          int area= ((end-start) * min(height[start],height[end]));
            maxAns=max(maxAns,area);
            if(height[start]<height[end]){
                start++;
            }else{
                end--;
            }
        }
        return maxAns;
    }
};
