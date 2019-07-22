class Solution:
    def __init__(self):
        self.ans = [-10000000000]
        self.ans2 = True

    def midBST(self, root: TreeNode):
        if root is not None:
            self.midBST(root.left)
            if root.val > self.ans[0]:
                self.ans[0] = root.val
            else:
                self.ans2 = False
            self.midBST(root.right)

    def isValidBST(self, root) -> bool:
        self.midBST(root)
        return self.ans2
