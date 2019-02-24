class Solution {
public:
    int maxArea(vector<int>& height) {
        int len=size(height);
        int max_temp=0;
        int l=len-1;
        int h;
        int max=len-1;
        int min=0;
        while(min!=max){
            h=height[min]<=height[max]?height[min]:height[max];
            max_temp=max_temp>h*l?max_temp:h*l;
            height[min]<=height[max]?min++:max--;
            l--;
        }
        return max_temp;
    }
};