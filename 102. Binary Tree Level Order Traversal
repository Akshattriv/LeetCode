class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        q = [root]
        result = []
        x=[]
        if not root:
            return []
        while(q):
            length = len(q)
            x=[]
            for i in range(length):
                node = q.pop(0)
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
                x.append(node.val)
            result.append(x)
        return result
