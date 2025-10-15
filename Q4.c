// 4. WAP in C to check whether an input year is leap year or not?

#include<stdio.h>
#include<conio.h>

int main(){

    int year;
    printf("Enter any year to check whether it is a leap year or not: ");
    scanf("%d", &year);

    if(year%4 == 0 || (year%100 == 0 && year%400 == 0 ))
    {
        printf("The year %d is a leap year", year);
    }
    else
    {
        printf("The year %d is not a leap year", year);
    }

    return 0;
}
