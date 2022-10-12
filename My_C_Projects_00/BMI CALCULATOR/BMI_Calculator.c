#include <stdio.h>
int main () {
  float feet, weight, height, bmi;
  char response='y'&'n';
    printf("Do you want to convert 'feet' to 'metres', first? (y/n) : ");
    scanf(" %c",&response);
    if (response=='y') {
        printf("For Converting Feet into Metres\nEnter Height in Feet = ");
        scanf("%f",&feet);
        height = 0.3048*feet;
        printf("Your Height in Metres is = %f m",height);
        printf("\nEnter your Weight in KGs = ");
        scanf("%f",&weight);
        bmi = (weight)/(height*height);
        printf("Your BMI is = %f\n",bmi);
        }
  else if (response=='n') {
    printf("Enter your Height in Metres = ");
    scanf("%f",&height);
    printf("Enter your Weight in KGs = ");
    scanf("%f",&weight);
    bmi = (weight)/(height*height);
    printf("Your BMI is = %f\n",bmi);
  }
  else {
    printf("INVALID RESPONSE!\n");
  }
  return 0;
}
