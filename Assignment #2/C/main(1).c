// Ellesia Truong
// 026588859
// CECS 342: Assignment #2

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Used a structure of people
typedef struct People{
  char name[20];
  int age;
}People;

// Partition function
int compareName(const void *x, const void *y){
  People *peopleX = (People *)x;
  People *peopleY = (People *)y;
  return strcmp(peopleX->name, peopleY->name); // strcmp compares two strings
}

int compareAge(const void *x, const void *y){
  People *peopleX = (People *)x;
  People *peopleY = (People *)y;
  return (peopleY->age - peopleX->age); // subtracting int 
}

int compareFloat(const void *x, const void *y){
  float numX = *(const float*) x;
  float numY = *(const float*) y;
  if(numX == numY){
    return 0; // Same number
  }
  else if(numX > numY){
    return 1; // First is greater, move pivot
  }
  else{
    return -1; // Second number is greater
  }
}


int main(void) {
  float numbers[] = {645.41, 37.59, 76.41, 5.31, -34.23, 1.11, 1.10, 23.46, 635.47, -876.32, 467.83, 62.25};
  int floatSize =  sizeof(numbers) / sizeof(float); // Finding the size of the numbers[]
  qsort(numbers, floatSize, sizeof(float), compareFloat);
  printf("Ascending Sort for Numbers: \n");
  // Print function for float array
  for(int i = 0; i < 12; i++){
    printf("%.2f   ", numbers[i]);
  }
  printf("\n");
  struct People p[] = {
  {"Hal", 20},
  {"Susann", 31},
  {"Dwight", 19},
  {"Kassandra", 21},
  {"Lawrence", 25},
  {"Cindy", 22},
  {"Cory", 27},
  {"Mac", 19},
  {"Romana", 27},
  {"Doretha", 32},
  {"Danna", 20},
  {"Zara", 23},
  {"Rosalyn", 26},
  {"Risa", 24},
  {"Benny", 28},
  {"Juan", 33},
  {"Natalie", 25}
  };
  int peopleSize = sizeof(p) / sizeof(struct People); // Finding the size of the struct
  printf("\nSort by Name Asc: \n");
  qsort(p, peopleSize, sizeof(struct People), compareName);
  for(int i = 0; i < peopleSize; i++){
    printf("Name: %s Age: %d \n", p[i].name, p[i].age);
  }
  printf("\nSort by Numbers Dsc, People Alphabetically: \n");
  qsort(p, peopleSize, sizeof(struct People), compareAge);
  for(int i = 0; i < peopleSize; i++){
    printf("Name: %s Age: %d \n", p[i].name, p[i].age);
  }
  return 0;
}