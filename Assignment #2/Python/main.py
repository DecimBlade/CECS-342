# Ellesia Truong
# 026588859  
# CECS 342: Assignment #2

# define a class People with name and age
class People:
  def __init__(self, name, age):
    self.name = name
    self.age = age
# for printing a string  
  def __repr__(self):
    return "Name:%s  Age:%s" % (self.name, self.age)

# main function  
if __name__ == "__main__":
  numbers = [645.41, 37.59, 76.41, 5.31, -34.23, 1.11, 1.10, 23.46, 635.47, -876.32, 467.83, 62.25]
  people = [
    People('Hal', 20),
    People('Susann', 31),
    People('Dwight', 19), 
    People('Kassandra', 21), 
    People('Lawrence', 25), 
    People('Cindy', 22), 
    People('Cory', 27), 
    People('Mac', 19), 
    People('Romana', 27), 
    People('Doretha', 32), 
    People('Danna', 20), 
    People('Zara', 23), 
    People('Rosalyn', 26), 
    People('Risa', 24), 
    People('Benny', 28), 
    People('Juan', 33), 
    People('Natalie', 25)
  ]
  
  print("Sort Numbers Asc: ")
  numbers.sort() #built-in sort function
  print(numbers)

  print()
  print("Sort People Alphabetically: ")
  people.sort(key = lambda x: x.name, reverse = False) #custom sorting by name, meaning alphabetically
  for i in people:
    print(i)

  print()
  print("Sort Numbers Dsc and People Alphabetically: ")
  people.sort(key = lambda x: x.age, reverse = True) #custom sorting, desc by age and then it will sort alphabetically
  for i in people:
    print(i)
  