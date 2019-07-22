class Solution:
    def isSame(self, root1, root2):
        if not root1 and not root2:
            return True
        if not root1 or not root2:
            return False
        if root1.val != root2.val:
            return False
        return self.isSame(root1.left, root2.right) and self.isSame(root1.right, root2.left)

    def isSymmetric(self, root: TreeNode) -> bool:
        return self.isSame(root, root)