#include <stdio.h>
int main () {
  float radius, height, ans, pi;
  pi = 3.14159;
  printf("For Calculation of Volume of a Cylinder\n");
  printf("Please enter 'Radius' : ");
  scanf("%f",&radius);
  printf("Please enter 'Height' : ");
  scanf("%f",&height);
  ans = (pi)*(radius*radius)*(height);
  printf("Your Answer is : %f\n",ans);
  return 0;
}
