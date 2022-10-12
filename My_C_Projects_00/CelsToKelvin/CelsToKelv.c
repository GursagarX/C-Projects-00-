#include <stdio.h>
int main () {
  int reply = 1 & 2;
  float cels,kelv;
  printf("Please enter : ");
  printf("\n'1' For converting Celsius to Kelvin Temperature");
  printf("\n'2' For converting Kelvin to Celsius Temperature");
  printf("\nYour Response ---------------------------------> ");
  scanf("%d",&reply);
  if (reply==1) {
    printf("Enter your value in Celsius : ");
    scanf("%f", &cels);
    printf("Your Answer is : %f K\n", cels+273);
  }
  else if (reply==2) {
    printf("Enter your value in Kelvin : ");
    scanf("%f", &kelv);
    printf("Your Answer is : %f C\n", kelv-273);
  }
  else {
    printf("INVALID RESPONSE!\n");
  }
  printf("PROGRAM ENDED\n");
}
