#include <stdio.h>
#include <stdlib.h>


int main () {
  int r=0,a=0,n,b=1,i,c;
  char redo;
  do {
    a=0;
    b=1;
    printf("enter the the value of n:");
    scanf("%d", &n);
    if(n>100) {
      printf("enter some lessor value\n");
    }
    else {
      for (i=0;i<=n;i++) {
        c=a+b;
        a=b;
        b=c;
        printf("serial no.%d => ", i+1);
        printf("%d\n",a);
      }
      printf("enter y or Y to continue:");
      scanf("%s", &redo);
      printf("\n");
    }
  }
  while(redo=='y'||redo=='Y');

  return 0;
}
