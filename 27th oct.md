```//reverse number by not using arithmetic or third variable

#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the two number:");
    scanf("%d%d",&a,&b);
    printf("The digits:%d & %d\n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("The swapped digits:%d & %d",a,b);
    return 0;
}
```
![image](https://user-images.githubusercontent.com/93079062/198190036-10d02e6b-7b7c-47aa-8403-db1560af3584.png)
```
//reverse a 4 digit number
#include <stdio.h>
int main()
{
    int n,a,b,c,d;
    printf("Enter the 4 digit number:");
    scanf("%d",&n);
    printf("The number is:%d\n",n);
    a=n%10;
    b=((n-a)/10)%10;
    c=((n-((b*10)+a))/100)%10;
    d=((n-((c*100)+(b*10)+a))/1000)%10;
    printf("The swapped digit:%d%d%d%d",a,b,c,d);
}
```
![image](https://user-images.githubusercontent.com/93079062/198192990-1c0a712f-d1c2-4da4-89bd-03225a2d2391.png)
```
//factorial of a number
#include <stdio.h>
int main()
{   
    int a,n,b;
    n=b=1;
    printf("Enter number:");
    scanf("%d",&a);
    while (n<=a){
        b*=n;
        n++;
    }
    printf("The factorial is:%d",b);
    return 0;
}
```
![image](https://user-images.githubusercontent.com/93079062/198194684-de09b4f7-a56a-40f1-9452-1a096b7dcc06.png)
```
//sum of two digits of a number
#include <stdio.h>
int main()
{   
    int a,n,b,sum;
    printf("Enter number:");
    scanf("%d",&a);
    n=a%10;
    b=(a-n)/10;
    sum=n+b;
    printf("The sum is:%d",sum);
    return 0;
}
```
![image](https://user-images.githubusercontent.com/93079062/198195003-f8de8f0c-98a1-4c54-90a8-f18e0bd28c8e.png)
```

