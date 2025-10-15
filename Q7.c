/* 7. Write a C program to print the digits of a number in words.
   Sample example of Output will be:
   Enter any number: 2481
   Two Four Eight One 
*/

#include<stdio.h>
#include<conio.h>

int main(){
  char ch[10][10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Saven", "Eight", "Nine"};
  int digits[50];
  int number, index = -1;
  printf("Enter any Integer number: ");
  scanf("%d", &number);
  
  while(number!=0){
    index++;
    digits[index] = number%10;
    number = number/10;
  }  

  for(int i = index; i>=0; i--){
    printf("%s ", ch[digits[i]]);
  }

  return 0;
}