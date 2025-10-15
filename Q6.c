// Write a program in C to convert a Decimal number into Binary, Octal and Hexadecimal number.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){

    int number, rem, base, choice, index = -1;
    char result[100], ch;
    printf("Enter any decimal number: ");
    scanf("%d", &number);

    printf("1. Convert into Binary \n");
    printf("2. Convert into Octal \n");
    printf("3. Convert into HexaDecimal \n");
    printf("Please enter your choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            base = 2; break;
        case 2:
            base = 8; break;
        case 3:
            base = 16; break;
        default:
            printf("Invalid choice!!"); exit(0);
    }

    while(number != 0){
        rem = number%base;
        switch(rem){
            case 10:
                ch = 'A'; break;
            case 11:
                ch = 'B'; break;
            case 12:
                ch = 'C'; break;
            case 13:
                ch = 'D'; break;
            case 14:
                ch = 'E'; break;
            case 15:
                ch = 'F'; break;
            default:
                ch = rem+48; break;
        }
        index++;
        result[index] = ch;
        number = number/base;
    }

    for(int i = index; i >= 0; i--)
    {
        printf("%c", result[i]);
    }

    return 0;
}




