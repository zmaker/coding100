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

    def setLeft(self, lnode):
        self.left = lnode

    def setRight(self, rnode):
        self.right = rnode

def visit(node):
    print(node)

    if node.isLeaf():
        return
    else:
        if node.left is not None:
            visit(node.left)
        if node.right is not None:
            visit(node.right)
        
    

n1 = Node(10)
n2 = Node(12)
n3 = Node(23)
n4 = Node(34)
n5 = Node(56)
n0 = Node(1, n1, n2)
n1.setLeft(n3)
n1.setRight(n4)
n2.setLeft(n5)

visit(n0)
