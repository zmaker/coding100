from collections import deque

d = deque()
d.appendleft(12)
d.appendleft(34)
d.appendleft(56)

for elem in d:
    print elem

print(d)
n = d.pop()
print(n)
print(d)
