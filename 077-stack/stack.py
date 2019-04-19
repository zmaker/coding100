class Stack:
    def __init__(self):
        self.items = []

    def push(self, item):
        self.items.append(item)

    def pop(self):
        return self.items.pop()

    def size(self):
        return len(self.items)

    def __str__(self):
        ret = "["
        for n in self.items:
            ret = ret + " " + (str(n))
        return ret + "]"

s = Stack()
print(s)

s.push(21)
s.push(32)
s.push(67)
s.push("dog")

print(s)

a = s.pop()

print(s)
print(s.size())
