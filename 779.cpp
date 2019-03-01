class Solution {
public:
    int kthGrammar(int N, int K) {
        //其实完全不用N行数，因为其实第1行的数在第二行是一样的
        int count=0;//计数：反转了多少次
        for(int i=pow(2,29);i>=1;i=i/2){//每次K大于2的相关次方的一半时就翻转过一次
            if(K>i){
                K=K-i;
                count++;//翻转计数
            }
        }
        if(count%2==0){
            return 0;//翻转次数为偶数
        }
        return 1;//翻转次数为奇数
    }
};