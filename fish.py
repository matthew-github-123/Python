class Fish(object):
	def __init__(self, name, colour):
		self.name = name
		self.colour = colour

	def print_fish(self):
		print "The name of the fish is " + self.name + " and its colour is " + self.colour

shark = Fish("Henry", "Blue")
shark.print_fish()
whale = Fish("Adam", "Green")
whale.print_fish()
octopus = Fish("Sally", "Pink")
octopus.print_fish()
