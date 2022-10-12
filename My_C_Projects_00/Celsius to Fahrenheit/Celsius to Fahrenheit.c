/* Celsius to Fahrenheit <--> Calculator using FLOAT values
Date : 3 Sept,2022 */
#include <stdio.h>
int main () {
  float celsius,fahrenheit,ans1,ans2;
  int response = 1 & 2;
  printf("Select:\n1 for Celsius --> Fahrenheit:");
  printf("\n2 for Fahrenheit --> Celsius:");
  printf("\n---------------------------->\t");
  scanf("%d",&response);
if (response==1) {
  printf("Enter Your Value in Celsius : ");
  scanf("%f",&celsius);
  ans1 = (celsius*9/5)+32;
  printf("Your Answer is : %f F\n",ans1);
}
  else if (response==2) {
    printf("Enter Your Value in Fahrenheit : ");
    scanf("%f",&fahrenheit);
    ans2 = (fahrenheit-32)*5/9;
    printf("Your Answer is : %f C\n",ans2);
  }
  else {
    printf("INVALID RESPONSE!\n");
  }
  return 0;
}
