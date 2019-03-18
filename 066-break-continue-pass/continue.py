
n = 0
while n < 100:
    print "n = ", n
    n += 1
    if (n % 7) == 0:
        print "è divisibile per 7"
        continue
    print "."
