/*
11. WAP in C to input time in hour, minutes, and seconds. Display it in proper format. Then input two time-instance and add them and display the added time again in proper format.
  First time is 10:12:34
  Second time   21:21:59
  Added time    31:34:33 
*/

struct Time{
  int hours;
  int minutes;
  int seconds;
};

#include<stdio.h>
#include<conio.h>

int main(){
  
  struct Time firstTime, secondTime, addedTime;
  int carry = 0;
  printf("Enter the first time in hour, minute and seconds: ");
  scanf("%d%d%d", &firstTime.hours, &firstTime.minutes, &firstTime.seconds);
  printf("Enter the second time in hour, minute and seconds: ");
  scanf("%d%d%d", &secondTime.hours, &secondTime.minutes, &secondTime.seconds);

  // Adding times.
  addedTime.seconds = firstTime.seconds + secondTime.seconds;
  if(addedTime.seconds >= 60){
     addedTime.seconds -= 60;
     carry = 1;
  }

  addedTime.minutes = firstTime.minutes + secondTime.minutes + carry;
  carry = 0;
  if(addedTime.minutes >= 60){
     addedTime.minutes -= 60;
     carry = 1;
  }

  addedTime.hours = firstTime.hours + secondTime.hours + carry;
  carry = 0;
  
  printf("\nFirst Time- %d:%d:%d", firstTime.hours, firstTime.minutes, firstTime.seconds);
  printf("\nLast Time-  %d:%d:%d", secondTime.hours, secondTime.minutes, secondTime.seconds);
  printf("\nAdded Time- %d:%d:%d", addedTime.hours, addedTime.minutes, addedTime.seconds);

  return 0;
}
