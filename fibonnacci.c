//WAP to print Fibonacci sequence and sum
#include <stdio.h>
#include <math.h>
int main()
{
      int a,b,c,n,i=2,s=1;
      a=0;
      b=1;
      printf("Enter number of terms for Fibonacci series: ");
      scanf("%d",&n);
      printf("\nFibonacci Series Upto %d Terms:\n",n);
      printf("%d,%d",a,b);
      while(i<n)
      {
            c=a+b;
            printf(",%d",c);
            a=b;
            b=c;
            s=s+c;
            i++;
      }
      printf("\nSum of Fibonacci Series:%d",s);
}
