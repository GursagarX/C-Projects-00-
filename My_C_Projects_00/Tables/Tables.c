#include <stdio.h>
int main () {
  int num,i,ans;
  printf("Please enter any number to find its corresponding table : ");
  scanf("%d",&num);
  for(i=1; i<=10; i++) {
    ans = num*i;
    printf("%d x %d = %d\n",num,i,ans);
  }
  return 0;
}
