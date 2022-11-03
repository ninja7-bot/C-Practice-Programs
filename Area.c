#include <stdio.h>

int main(){
  printf("A simple program to find out the area of a circle, volume of a cylinder and a few other simple programs.");
  int radius;
  printf("Input the radius of the circle you wish to calculate the area of: ");
  scanf("%d". &radius);
  
  float area, pi;
  pi=3.14;
  area=pi*radius*radius; //Area of circle formula.
  printf("Area of the circle with radius %d is: %f", radius, area);
  
  int height; //For Volume of the cylinder.
  printf("Input the height of the cylinder you wish to calculate the volume of: ");
  scanf("%d", &height);
  volume=pi*radius*radius*height; //Volume of Cylinder.
  printf("Volume of the Cylinder with radius %d and height %d is: %f", radius, height, volume);
  return 0;
  
