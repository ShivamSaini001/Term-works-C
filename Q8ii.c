/*
  8. Write a C program to compute the sum of first N terms for the following series.
    ii) S=1+2/2!+3^2/3!+4^3/4!+…
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

int power(int num, int pow){
  if(pow == 0){
     return 1;
  }
  int result = num;
  for(int i=2; i<=pow; i++){
     result = result * num;
  }
  return result;
}

int main(){
  int number;
  float sum = 0, term;
  printf("Enter any number of terms: ");
  scanf("%d", &number);

  for(int i = 1; i<=number; i++){
    term = (float)power(i, i-1)/fact(i);
    sum += term;
  }

  printf("The sum of the series is: %f", sum);

  return 0;
}
