/*
10. Write C code to print the following patterns:
 (ii)
          E
        E D E
      E D C D E
    E D C B C D E
  E D C B A B C D E
    E D C B C D E
      E D C D E
        E D E
          E

*/

#include<stdio.h>
#include<conio.h>

int main(){
  int n, num;

  printf("Enter the size of pattern: ");
  scanf("%d", &n);

  for(int i=1; i<=n; i++){
     for(int s=1; s<=n-i; s++){
        printf("  ");
     }
     num = n + 65;
     for(int j=1; j<=2*i-1; j++){
        if(j <= i){
           num--;
        }
        else{
           num++;
        }
        printf("%c ", num);
     }
     printf("\n");
  }

  for(int i=1; i<n; i++){
    for(int s=1; s<=i; s++){
	printf("  ");
    }
    num = n + 65;
    for(int j=1; j<=2*n-2*i-1; j++){
       if(j<=n-i){
          num--;
       }
       else{
	  num++;
       }
       printf("%c ", num);
    }
    printf("\n");
  }

  return 0;
}
