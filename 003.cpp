class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=s.length();//求出字符串长度
        int real_max=0;//最后返回
        vector<int> max;//变长数组用于动态规划
        max.push_back(0);//初始化
        int hash[180]={-1};
        memset(hash, -1, sizeof(hash));
        for(int i=0;i<len;i++){//循环计算
            max.push_back(0);//分配内存
            if(hash[s[i]]==-1){//若这个数之前没有出现
                max[i+1]=max[i]+1;//最大长度为上一个子串的最大长度加一
                hash[s[i]]=i;//散列
            }
            else{
                max[i+1]=(i-hash[s[i]])<max[i]+1?(i-hash[s[i]]):max[i]+1;//最大长度为上一个子串的最大长度加一与出现的重复字符间距之间的最小值.
                hash[s[i]]=i;
            }
            if(real_max<max[i+1]){
                real_max=max[i+1];//更新最小值
            }
        }
        return real_max;
    }
};