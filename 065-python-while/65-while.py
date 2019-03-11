n = 0
while n < 10:
    print n
    n += 1

print "fine"

n = 0
run = True
while run:
    ans = input("0 procedi, 1 stop: ")
    if ans == 1:
        run = False
        print "stop"
    n += 1
    print n
print "fine while"    
