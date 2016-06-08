import java.util.*;
import java.lang.*;
import java.io.*;


class primebwrange
{
public static void main(String args[])
{
int s=5,e=10,c=0,a,b;
int count=0;

for(a=s;a<=e;a++)
 {
 
 for(b=2;b<a;b++)
     {
     if(b%a==0)
     c++;
     }

  if(c==0)
  {
    count++;
  }
  } System.out.println(count);
 }
}
