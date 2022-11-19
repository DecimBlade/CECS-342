// Ellesia Truong
// 026588859
// CECS 342: Assignment #2

#include <iostream>
#include <array>
#include <string>
#include <list>
#include <algorithm>
#include <string.h>
#include "People.h"
using namespace std;


// Function to print an Array
template<class T>
void printArray(T arr[], int n){
  for(int i = 0; i < n; i++){
    cout << arr[i] << " | ";
  }
  cout << endl;
}

// Used a bubble sort and overloaded the operators to get the sort
template<class Type>
void AscNameSort(Type arr[], int n){
  for(int i = 0; i < n -1; i++){
    bool swapped = false;
    for(int j = 0; j < n - i - 1; j++){
      if(arr[j] < arr[j + 1]){
        Type temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        swapped = true;
      }
    }
    if (!swapped){
      return;
    }
  }
}

template<class Type>
void DscAgeSort(Type arr[], int n){
  for(int i = 0; i < n - 1; i++){
    bool swapped = false;
    for(int j = 0;j < n - i - 1; j++){
      if(arr[j] > arr[j + 1]){
        Type temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        swapped = true;
      }
    }
    if (!swapped){
      return;
    }
  }
}


int main() {
  // #1: Sort float numerically
  float numbers[] = {645.41, 37.59, 76.41, 5.31, -34.23, 1.11, 1.10, 23.46, 635.47, -876.32, 467.83, 62.25};
  int n = sizeof(numbers)/ sizeof(numbers[0]);
  sort(numbers, numbers + n);
  cout << "Ascending Number Sort: " << endl;
  printArray(numbers, n);
  cout << endl;
  int size = 17;
  People p[] = {
  People("Hal", 20), 
  People("Susann", 31), 
  People("Dwight", 19), 
  People("Kassandra", 21), 
  People("Lawrence", 25), 
  People("Cindy", 22), 
  People("Cory", 27), 
  People("Mac", 19), 
  People("Romana", 27), 
  People("Doretha", 32), 
  People("Danna", 20), 
  People("Zara", 23), 
  People("Rosalyn", 26), 
  People("Risa", 24), 
  People("Benny", 28), 
  People("Juan", 33), 
  People("Natalie", 25)};

  AscNameSort(p, size);
  cout << "Ascending Name Sort: " << endl;
  // To print the array of People
  for(int i = 0; i < size; i++){
    cout << "Name: " << p[i].getName() << "  Age: " << p[i].getAge() << endl;
  }
  cout << endl;

  DscAgeSort(p, size);
  cout << "Descending Age Sort: " << endl;
  for(int i = 0; i < size; i++){
    cout << "Name: " << p[i].getName() << "  Age: " << p[i].getAge() << endl;
  }
  return 0;
}