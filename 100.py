class Solution:
    def __init__(self):
        self.ans = True

    def isSame(self, p: TreeNode, q: TreeNode):
        if p is not None and q is not None:
            if p.val == q.val:
                self.isSame(p.left, q.left)
                self.isSame(p.right, q.right)
            else:
                print(p.val, q.val)
                self.ans = False
        elif p is None and q is not None:
            self.ans = False
        elif p is not None and q is None:
            self.ans = False
        else:
            pass

    def isSameTree(self, p: TreeNode, q: TreeNode) -> bool:
        self.isSame(p, q)
        return self.ans