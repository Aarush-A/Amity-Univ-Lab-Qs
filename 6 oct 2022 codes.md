```// WAP TO CONVERT SPECIFIC DAYS TO YEARS,MONTHS,DAYS
#include <stdio.h>

int main() {
    int a,b,c,d;
    printf("EMTER NUMBER OF DAYS:");
    scanf("%d",&a);
    b=a/365;
    c=(a%365)/30;
    d=((a%365)%30);
    printf("YEARS=%d\n",b);
    printf("MONTHS=%d\n",c);
    printf("DAYS=%d\n",d);
    return 0;
}
```
![image](https://user-images.githubusercontent.com/93079062/194212870-562f5bb8-6962-41b5-9ab5-1979ab561253.png)
```
// WAP TO CONVERT SPECIFIC INTEGER TO HOURS, MINUTES, SECONDS
#include <stdio.h>

int main() {
    int a,b,c,d;
    printf("ENTER INTEGER:");
    scanf("%d",&a);
    b=a/3600;
    c=(a%3600)/60;
    d=((a%3600)%60);
    printf("HOURS=%d\n",b);
    printf("MINUTES=%d\n",c);
    printf("SECONDS=%d\n",d);
    return 0;
}```

![image](https://user-images.githubusercontent.com/93079062/194213301-e430bb6d-16ad-4d07-886b-0099fec65ea0.png)

```// WAP TO FIND ROOT OF QUADRATIC EQUATION

#include <stdio.h>
#include <math.h>    

int main() {
    double a,b,c;
    double d=0,e=0,f=0,g=0,h=0,i=0;
    printf("ENTER COEFFICIENT OF X^2:");
    scanf("%lf",&a);
    printf("ENTER COEFFICIENT OF X:");
    scanf("%lf",&b);
    printf("ENTER CONSTANT:");
    scanf("%lf",&c);
    f=sqrt((b*b)-(4*a*c));
    g=2*a;
    d=0-b+f;
    e=0-b-f;
    h=d/g;
    i=e/g;
    printf("The Roots are:%lf & %lf",h,i);
    printf("%lf",f);
    return 0;
}
```
![image](https://user-images.githubusercontent.com/93079062/194217850-a84ff18a-fb84-4271-b68d-4b6615a2974f.png)
```
// WAP TO FIND GREATEST OF THREE NUMBERS
#include <stdio.h>
int main() 
{
    int a,b,c;
    printf("ENTER A:");
    scanf("%d",&a);
    printf("ENTER B:");
    scanf("%d",&b);
    printf("ENTER C:");
    scanf("%d",&c);
    if(a>b)
    {if (a>c)
        {printf("A is the bigger number:%d",a);}
        else if (c>a)
        {printf("C is the bigger number:%d",c);}}
    else if(b>a)
    {if (b>c)
        {printf("B is the bigger number:%d",b);}
        else if (c>b)
        {printf("C is the bigger number:%d",c);}}}```
        
  ![image](https://user-images.githubusercontent.com/93079062/194220314-9a4a2cb2-dfee-4561-bfe0-be197c9feb41.png)
