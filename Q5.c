// Q.5 Write a program in C to print first n palindrome numbers.

#include<stdio.h>
#include<conio.h>

int checkNumberIsPalindrome(int n){
    int num = n, reversed = 0, remainder;
    while(num != 0){
        remainder = num%10;
        reversed = reversed * 10 + remainder;
        num = num/10;
    }
    if(reversed == n){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int size, count = 0, num = 0, result;
    printf("Enter how much first palindrome numbers you want: ");
    scanf("%d", &size);
    while(count <= size){
        result = checkNumberIsPalindrome(num);
        if(result != 0){
            printf("\n%d", num);
            count++;
        }
        num++;
    }
    return 0;
}
