#-----coding:utf-8------
'''
@project:leetcode
@author:yixu
@file:539.py
@ide:PyCharm
@create_time:2019/5/28 21:56
'''
class Solution:
    def findMinDifference(self, timePoints) -> int:
        ans=[]#生成答案
        for ele in timePoints:#切片用分钟表示
            ele1,ele2=ele.split(':',2)
            ans.append(int(ele1)*60+int(ele2))
        ans.sort()#对时间排序
        temp=ans[0]#保存初始节点
        for i in range(len(ans)-1):#计算节点之间的时间间隔
            ans[i]=ans[i+1]-ans[i]
        ans[len(ans)-1]=temp-ans[len(ans)-1]+24*60#回路节点
        ans.sort()#节点排序
        return ans[0]#返回最小的节点

if __name__=='__main__':
    a=Solution()
    l=["23:59","00:00"]
    zz=a.findMinDifference(l)
    print(zz)