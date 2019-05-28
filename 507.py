#-----coding:utf-8------
'''
@project:leetcode
@author:yixu
@file:507.py
@ide:PyCharm
@create_time:2019/5/28 8:37
'''

class Solution:
    def checkPerfectNumber(self, num: int) -> bool:
        sum=1#因子的和
        if (num<=1):
            return False#小于1的都不对，而且负数开方是不对的
        for i in range(2,int(pow(num,0.5))+1):#扫描因子
            if(num%i==0):#找到因子时两个因子都要添加
                sum+=i
                sum+=num//i
            if(num==pow(int(pow(num,0.5)),2)):#是完全平方数时要减去一个因子
                sum-=int(pow(num,0.5))
        if(num==sum):#判断是否相等，是就输出yes
            return True
        return False

if __name__ == '__main__':
    a=Solution()
    print(a.checkPerfectNumber(2))