class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int hash[27]={0};//哈希映射
        int len=ransomNote.size();//字符串长度1
        int len2=magazine.size();//字符串长度2
        for(int i=0;i<len;i++){
            hash[ransomNote[i]-'a']++;//映射到hash看字符个数
        }
        for(int i=0;i<len2;i++){
            hash[magazine[i]-'a']--;//对应的字符减去一个
        }
        for(int i=0;i<26;i++){
            if(hash[i]>0){
                return false;//有字符不够，失败
            }
        }
        return true;//成功
    }
};