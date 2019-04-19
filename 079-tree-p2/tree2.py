class Node:
    def __init__(self, data, left=None, right=None):

        self.data = data
        self.left = left
        self.right = right

    def __str__(self):
        return str(self.data)

    def isLeaf(self):
        if self.left == None and self.right == None:
            return True
        else:
            return False

root = Node(100)
if root.isLeaf():
    print("foglia")
else:
    print("non foglia")

n1 = Node(12)
root.left = n1
if root.isLeaf():
    print("foglia")
else:
    print("non foglia")
