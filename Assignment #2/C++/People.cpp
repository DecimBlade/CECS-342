#include <iostream>
#include <string>
#include "People.h"

using namespace std;

//Default Constructor
People::People(){
  name = "";
  age = 0;
}

//Overloaded Constructor
People::People(string n, int a){
  name = n;
  age = a;
}

// Getter Functions for Printing Array
string People::getName(){
  return this->name;
}

int People::getAge(){
  return this->age;
}

bool People::operator >(People p){
  // default case: if age is same, sort by name
  if(this->age == p.age){
    return(*this < p);
  }
  if(this->age < p.age){
    return true;
  }
  else{
    return false;
  }
}

// Sorting alphabetically
bool People::operator <(People p){
  // compare() returns a value < 0 if p.name is smaller than this->name
  if(this->name.compare(p.name) > 0){
    return true; // meaning this-> is smaller then p.name
  }
  return false;
}
