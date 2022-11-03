#include <stdio.h>

int main(){
  printf("A simple program to find out the area of a rectangle or square, volume of a cube or cuboid.");
  int length, breadth;
  printf("Input the length: ");
  scanf("%d". &length);
  printf("Input the breadth: ");
  scanf("%d", &breadth);
  
  int area;
  area = length*breadth
  printf("Area of the quadrilateral with length %d and breadth %d is: %d", length, breadth, area);
  
  int height; //For Volume of the Cube/Cuboid.
  printf("Input the height: ");
  scanf("%d", &height);
  volume=length*breadth*height; //Volume of Cylinder.
  printf("Volume of the Cube/Cuboid with lengths %d, breadth %d and height %d is: %d", length, breadth, height, volume);
  return 0;
