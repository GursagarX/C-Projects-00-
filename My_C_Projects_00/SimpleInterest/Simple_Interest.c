/* Simple Interest Calculator with FLOAT values
Date : 3 Sept,2022 */
#include <stdio.h>
int main () {
  float prin, time, roi, ans;
  printf("Please Enter Your Principal Amount : ");
  scanf("%f",&prin);
  printf("Please Enter Your Time Period : ");
  scanf("%f",&time);
  printf("Please Enter Your Rate of Interest : ");
  scanf("%f",&roi);
  ans = (prin*time*roi)/100;
  printf("Your Answer is %f",ans);
  return 0;
}
