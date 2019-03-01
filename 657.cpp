class Solution {
public:
    bool judgeCircle(string moves) {
        int len=size(moves);//字符长度
        int x=0;//x的长度
        int y=0;//y的长度
        for(int i=0;i<len;i++){
            switch(moves[i]){
                case 'U':y++;break;//向上
                case 'D':y--;break;//向下
                case 'L':x--;break;//向左
                case 'R':x++;break;//向右
            }
        }
        if(x==0&&y==0){//回到原点
            return true;
        }
        return false;
    }
};