class Solution:
    def levelOrder(self, root: TreeNode) -> List[List[int]]:
        ans=[]
        q=queue.Queue()
        if root is None:
            return ans
        q.put(root)
        last=0
        first=1
        end=1
        temp_list=[]
        while(not q.empty()):
            while(last<first):
                temp=q.get()
                last+=1
                temp_list.append(temp.val)
                if temp.left is not None:
                    end+=1
                    q.put(temp.left)
                if temp.right is not None:
                    end+=1
                    q.put(temp.right)
            ans.append(temp_list)
            temp_list=[]
            first=end
        return ans
