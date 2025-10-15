// 2. WAP in C to check whether a triangle is valid or not by providing all the sides. If valid then check whether the triangle is equilateral, isosceles, or scalene? 

#include<stdio.h>
#include<conio.h>

int main(){
  
  int side1, side2, side3;
  printf("Enter three sides of the triangle:");
  scanf("%d%d%d", &side1, &side2, &side3);

  // Triangle is valid.
  if(side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
  {
    // Check Equilateral Triangle.
    if(side1 == side2 && side1 == side3 && side2 == side3){
	printf("The triangle you entered is a Equilateral Triangle.");
    }
    // Check Isosceles Triangle.
    else if(side1 == side2 || side1 == side3 || side2 == side3){
	printf("The triangle you entered is a Isosceles Triangle.");
    }
    // Check Scalene Triangle.
    else{
	printf("The triangle you entered is a Scalene Triangle.");
    }
  }
  // Triangle is Invalid.
  else
  {
    printf("The triangle is invalid!");
  }
  getch();
  return 0;
}