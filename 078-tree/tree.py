class Node:
    def __init__(self, data, left=None, right=None):

        self.data = data
        self.left = left
        self.right = right

    def __str__(self):
        return str(self.data)


n1 = Node(12)
n2 = Node(23)
root = Node(34, n1, n2)

print(root)
