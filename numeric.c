#include<stdio.h>
int main()
{
    String str="jgjgh";
    int i;
    for(i=0;i<(strlen(str)-1);i++)
    {
        if((int)str[i]<10)
         printf("is digit");
         else
         printf("not");
     }
     return 0;
}
