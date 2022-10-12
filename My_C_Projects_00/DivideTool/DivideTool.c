/* Dividing tool for integer values only
Date : 3 Sept,2022  */
#include <stdio.h>
int main () {
  int dividend, divisor, quotient, remainder;
  int num;
  printf("Please enter your Dividend : ");
  scanf("%d",&dividend);
  printf("Please enter your Divisor : ");
  scanf("%d",&divisor);
  // printf("Your Dividend is : %f\n",dividend);
  // printf("Your Divisor is : %f\n",divisor);
  remainder = dividend%divisor;
  quotient = dividend/divisor;
  printf("Choose your output,\n Enter : (1) for 'remainder' or\n \t (2) for 'quotient' : ");
  scanf("%d",&num);
  if (num==1) {
  printf("Your Remainder is : %d\n",remainder);
}
  else if (num==2) {
    printf("Your Quotient is : %d\n",quotient);
}
else {
  printf("INVALID OPTION");
}
return 0;
}
