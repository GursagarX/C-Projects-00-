#include <stdio.h>
int main () {
  int response= 1 & 2 & 3 & 4, i, num;
  printf("Please Choose the following : ");
  printf("\n'1'for Addition");
  printf("\n'2'for Subtraction");
  printf("\n'3'for Multiplication");
  printf("\n'4'for Division");
  scanf("%d",&response);
  if (response=1) {
    printf("Enter your numbers adjacently like (23 43 etc. for addition) : ");
    for (i=0,i<100, i++) {
      scanf("%d",&num);
      num = num;
    }
    printf("Your Answer is : %d",num);
  }
  return 0;
}
