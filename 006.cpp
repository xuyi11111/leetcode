class Solution {
public:
    string convert(string s, int numRows) {
        int len=s.length();
        string l;//最终输出
        if(numRows==1){
            return s;//防止因为num=1时永久循环
        }
        for(int i=1;i<=numRows;i++){//多行数的输出
            for(int j=i-1;j<len;j=j+(numRows-1)*2){//单行实际执行，len边界判断，j持续递增
                l+=s[j];//输出添加字符
                int temp=j;//z形在中间的时候会有额外输出
                if(i!=1&&i!=numRows){//掐头去尾
                    temp+=(numRows-i)*2;//添加额外输出
                    if(temp<len){//添加字符
                        l+=s[temp];
                    }
                }
            }
        }
        return l;
    }
};