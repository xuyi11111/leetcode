class Solution:
    def __init__(self):
        self.ans=0
    def maxDepth(self, root: TreeNode) -> int:
        def Depth(node,level):
            if node is None:
                return
            self.ans=max(self.ans,level)
            Depth(node.left,level+1)
            Depth(node.right,level+1)
        Depth(root,1)
        return self.ans