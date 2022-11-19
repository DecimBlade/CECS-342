// Ellesia Truong
// 026588859 
// CECS 342: Assignment #2

using System;
using System.Collections.Generic;
using System.Linq;

class Program {
  public static void Main (string[] args) {
    List<double> numbers = new List<double>(){
      645.41, 37.59, 76.41, 5.31, -34.23, 1.11, 1.10, 23.46, 635.47, -876.32, 467.83, 62.25
    };

    Console.WriteLine("Sorting Numbers Ascending: ");
    List<double> AscNumbers = numbers.OrderBy(number => number).ToList(); // Orderby sorts the double list ascending
    foreach(double number in AscNumbers)
      Console.WriteLine(number);
    
    List<People> Person = new List<People>(){
      new People() {name = "Hal", age = 20},
      new People() {name = "Susann", age = 31},
      new People() {name = "Dwight", age = 19},
      new People() {name = "Kassandra", age = 21},
      new People() {name = "Lawrence", age = 25},
      new People() {name = "Cindy", age = 22},
      new People() {name = "Cory", age = 27},
      new People() {name = "Mac", age = 19},
      new People() {name = "Romana", age = 27},
      new People() {name = "Doretha", age = 32},
      new People() {name = "Danna", age = 20},
      new People() {name = "Zara", age = 23},
      new People() {name = "Rosalyn", age = 26},
      new People() {name = "Risa", age = 24},
      new People() {name = "Benny", age = 28},
      new People() {name = "Juan", age = 33},
      new People() {name = "Natalie", age = 25}
    };

    Console.WriteLine();
    List<People> AscPeople = Person.OrderBy(person => person.name).ToList(); // OrderBy sorts things ascending
    Console.WriteLine("Sorting People Alphabetically: ");
    foreach(People person in AscPeople) // printing 
    Console.WriteLine("Name: " + person.name + " Age: " + person.age);

    // OrderByDescending Sorts the first parameter descending and then it will sort the second parameter by ascending using the ThenBy()
    Console.WriteLine();
    List<People> DscList = Person.OrderByDescending(p => p.age).ThenBy(p => p.name).ToList(); 
    Console.WriteLine("Sorting People Descending by Age and Alphabetically: ");
    foreach(People p in DscList)
    Console.WriteLine("Name: " + p.name + " Age: " + p.age);
  }

  // People class
  class People{
    public string name{
      get;
      set;
    }
    public int age{
      get;
      set;
    }
  }
}