#include <iostream>
#include <string>
using namespace std;

#ifndef People_H
#define People_H

class People{
  private:
    string name;
    int age;

  public:
    // Default Constructor
    People();
    // Overloaded Constructor
    People(string name, int age);
    string getName();
    int getAge();

    // Overloaded Operators
    bool operator<(People p);
    bool operator>(People p);
};

#endif