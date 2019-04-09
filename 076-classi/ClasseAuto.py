class Auto():

    def __init__(self):
        self.x = 0
        self.y = 0

    def up(self):
        self.y += 1

    def down(self):
        self.y -= 1

    def toString(self):
        ret = "Auto (" + str(self.x) + ", " + str(self.y) + ")"
        return ret


my_500 = Auto()
print (my_500.toString())

my_127 = Auto()

my_500.up()
my_500.up()
my_500.up()
print (my_500.toString())
print (my_127.toString())
