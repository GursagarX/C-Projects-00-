/* Percentage to Grade Assigner using FLOAT values
Date : 3 Sept,2022 */
#include <stdio.h>
int main() {
  float marks;
  printf("Please Enter your percentage obtained (0-100) : ");
  scanf("%f",&marks);
  if (marks<=100 && marks>=90) {
    printf("Your Grade is A++ (PASS)\n");
  }
  else if (marks<=90 && marks>=80) {
    printf("Your Grade is A (PASS)\n");
  }
  else if (marks<=80 && marks>=70) {
    printf("Your Grade is B (PASS)\n");
  }
  else if (marks<=70 && marks>=60) {
    printf("Your Grade is C (PASS)\n");
  }
  else if (marks<=60 && marks>=50) {
      printf("Your Grade is D (PASS)\n");
    }
  else if (marks<=50 && marks>=40) {
      printf("Your Grade is E (PASS)\n");
    }
    else if (marks<=40 && marks>=00) {
        printf("Your Grade is F (FAIL)\n");
      }
      else {
        printf("INVALID VALUE\n");
      }
      printf("THANKS AND HAVE A NICE DAY!!!\n");
      return 0;
}
