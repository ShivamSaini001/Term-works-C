/*
Write C code to print the following patterns:
 (i)                     (ii)
        1                            E
      1 2 1                        E D E
    1 2 3 2 1                    E D C D E
  1 2 3 4 3 2 1                E D C B C D E
1 2 3 4 5 4 3 2 1            E D C B A B C D E
  1 2 3 4 3 2 1                E D C B C D E
    1 2 3 2 1                    E D C D E
      1 2 1                        E D E
        1                            E

*/

#include<stdio.h>
#include<conio.h>

int main(){
  int n, num;

  printf("Enter number of rows: ");
  scanf("%d", &n);

  for(int i=1; i<=n; i++){
     for(int s=1; s<=n-i; s++){
        printf("  ");
     }
     num = 0;
     for(int j=1; j<=2*i-1; j++){
        if(j <= i){
           num++;
        }
        else{
           num--;
        }
        printf("%d ", num);
     }
     printf("\n");
  }

  for(int i=1; i<n; i++){
    for(int s=1; s<=i; s++){
	printf("  ");
    }
    num = 0;
    for(int j=1; j<=2*n-2*i-1; j++){
       if(j<=n-i){
          num++;
       }
       else{
	  num--;
       }
       printf("%d ", num);
    }
    printf("\n");
  }

  return 0;
}
