#include <stdio.h>
#include<string.h>
int main(void) {
  char name[50];
  int i,len;
  printf("\n enter any string");
  scanf("%s",name);
  len=strlen(name);
  for(i=len;i>=0;i--)
    {
      int n=(int)name[i];
      //printf("%d",n);
      if((n>97) && (n<122))
      {
        printf("%c",name[i]);
        }
    }
  return 1;
}