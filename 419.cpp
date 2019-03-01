class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int h=size(board);//矩阵宽
        int l=size(board[0]);//矩阵长
        int count=0;//数量
        for(int i=0;i<h;i++){//两层循环查找
            for(int j=0;j<l;j++){
                if(board[i][j]=='.'){
                    continue;//为空所以不为飞机
                }
                if(i-1!=-1&&board[i-1][j]=='X'){//寻找飞机头必须在左上
                    continue;
                }
                if(j-1!=-1&&board[i][j-1]=='X'){//寻找飞机头必须在左上
                    continue;
                }
                count++;//左上飞机头
            }
        }
        return count;//返回个数
    }
};