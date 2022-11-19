-- Ellesia Truong
-- 026588859
-- CECS 342: Assignment #2

-- import libraries
import Data.Function (on)
import Data.List(sortBy, sort)

-- setting up the people class
data People = People String Int deriving(Show, Eq)


-- assigning String to n = name
name :: People -> String
name (People n a) = n
-- assigning Int to a = age
age :: People -> Int
age (People n a) = a

data People' = People'{
  name' :: String,
  age' :: Int
} deriving(Show, Eq)

main = do
  let numbers = [645.41, 37.59, 76.41, 5.31, -34.23, 1.11, 1.10, 23.46, 635.47, -876.32, 467.83, 62.25]
  let ascNum = sort numbers -- using built-in sort function
  print "Sorting Numbers by Ascending Values:"
  print ascNum

  let p = [People "Hal" 20,  
           People "Susann" 31,  
           People "Dwight" 19, 
           People "Kassandra" 21, 
           People "Lawrence" 25, 
           People "Cindy" 22, 
           People "Cory" 27, 
           People "Mac" 19, 
           People "Romana" 27, 
           People "Doretha" 32, 
           People "Danna" 20, 
           People "Zara" 23, 
           People "Rosalyn" 26, 
           People "Risa" 24, 
           People "Benny" 28, 
           People "Juan" 33, 
           People "Natalie" 25]

  print "Sorting People Alphabetically: "
  let ascPeople = sortBy (compare `on` name) p -- using compare function to sort ascending by name
  print ascPeople

  -- <> function allows the program to use a second sort after the first one
  -- first sorting reverse by age and then sort in order by name
  print "Sorting Numbers Descneding and People Alphabetically: "
  let dscNum = sortBy ((flip compare `on` age) <> (compare `on` name)) p 
  print dscNum