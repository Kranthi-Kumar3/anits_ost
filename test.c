#include<stdio.h>
main()
{
 int length=0,i;
 char str[100];
 printf("enter any string");
 scanf("%[^\n]s",str);
 for(i=0;str[i]!='\0';i++)
 {
  length++;
 }
 printf("%s length is %d",str,length);
}
