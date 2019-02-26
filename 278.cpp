// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(n==1){
            return 1;//判定临界点
        }
        int max=n;
        int min=1;
        int mid = max / 2 + min / 2;
		if (max % 2 && min % 2) {
			mid++;//防止最后面边界溢出，使用这种方法防止int溢出
		}
        bool flag=isBadVersion(mid);//是否为true；
        while((min+1)!=max){
            if(flag!=isBadVersion(max)){
                min=mid;//更新下底
            }
            else{
                max=mid;
            }
            mid=max/2+min/2;
            if(max%2&&min%2){
                mid++;//更新mid
            }
            flag = isBadVersion(mid);//更新flag
        }
        if(isBadVersion(mid)==true){
            return mid;//最后校验
        }
        return mid+1;//防止只有一个true的情况
    }
};