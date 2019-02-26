// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int min=1;//最小
        int max=n;//最大
        int mid=min+(max-min)/2;//二分取中间并且防止溢出
        int temp=guess(mid);//猜测数字初始化
        while(temp!=0){//没猜中
            if(temp==-1){
                max=mid-1;//猜大了
                }
            else{
                min=mid+1;//猜小了
            }
            mid=min+(max-min)/2;//更新猜测
            temp=guess(mid);//重新猜测
        }
        return mid;//返回
    }
};