class Solution:
    def rangeSumBST(self, root: Optional[TreeNode], low: int, high: int) -> int:
        self.sum_=0
        def inorder(root):
            if root:
                if root.val > low:
                    inorder(root.left)
                if root.val >= low and root.val <= high:   
                    self.sum_ += root.val
                if root.val < high:
                    inorder(root.right)
        inorder(root)
        return self.sum_
