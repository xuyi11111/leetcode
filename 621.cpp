class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int len=size(tasks);
        int hash[27]={0};
        int max=0;
        for(int i=0;i<len;i++){
            hash[tasks[i]-'A']++;
            max=max>hash[tasks[i]-'A']?max:hash[tasks[i]-'A'];//哈希映射
        }
        return (max-1)*n+len；
    }
};