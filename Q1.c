// WAP in C to check whether an input character is alphabet, digit or special symbol? 

#include<stdio.h>
#include<conio.h>

int main(){

  char ch;
  int asciiCode;
  printf("Enter any character: ");
  scanf("%c", &ch);
  asciiCode = ch; 
  // Check character is number.
  if(asciiCode >= 48 && asciiCode <= 57)
    printf("Character '%c' is an number.", ch);
  // Check character is alphabet.
  else if((asciiCode >= 65 && asciiCode <= 90) || (asciiCode >= 97 && asciiCode <= 122))
    printf("Character '%c' is an Alphabet.", ch);
  // Check character is special symbol.
  else
    printf("Character '%c' is an special symbol", ch);

  return 0;
}