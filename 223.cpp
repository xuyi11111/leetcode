class Solution {
public:
    int samelong(int x1low, int x1high, int x2low, int x2high){//找到两个区间重叠的区间
        int l;
        if(x1low<=x2low){
            l=x1high<x2high?x1high-x2low:x2high-x2low;//找到两个区间重叠的区间
        }
        else{
            l=x1high<x2high?x1high-x1low:x2high-x1low;//找到两个区间重叠的区间
        }
        return l;
    }
    int same(int x1low, int x1high, int y1low, int y1high, int x2low, int x2high, int y2low, int y2high){
        if(x1high<=x2low||y1high<=y2low||x2high<=x1low||y2high<=y1low){//没有重叠的矩形
            return 0;
        }
        int l,h;
        l=samelong(x1low, x1high, x2low, x2high);//重叠的长度
        h=samelong(y1low, y1high, y2low, y2high);//重叠高度
        return l*h;//返回重叠面积
    }
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int temp=(C-A)*(D-B)-same(A,C,B,D,E,G,F,H)+(H-F)*(G-E);//计算面积
        return temp;
    }
};