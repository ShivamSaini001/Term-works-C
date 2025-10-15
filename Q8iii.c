/*
  8. Write a C program to compute the sum of first N terms for the following series.
    iii) S=1-2!+3!-4!+5!-6!+…
*/

#include<stdio.h>
#include<conio.h>

int fact(int num){
  if(num  <= 1){
     return num;
  }
  else{
     return num * fact(num-1);
  }
}

int main(){
  int number, sum = 0, term;
  printf("Enter any number of terms: ");
  scanf("%d", &number);

  for(int i = 1; i<=number; i++){
    term = fact(i);
    if(i%2 == 0){ 
      sum -= term; 
    }
    else{
      sum += term;
    }
  }

  printf("The sum of the series is: %d", sum);

  return 0;
}
