#include<stdio.h>
int main()
{
    int num,n,i,count=0;
    int k,d=3;
    scanf("%d",&num);
    n=num;
    i=0;
        while(n!=0)
        {
         k=n%10;
         n=n/10;
        
           if(k==d)
           count++;  
      
        }
        printf("occurance of %d is %d times",d,count);
        return 0;
}
