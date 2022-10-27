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
    scanf("%d",n);
    printf("The number is:%d\n",n);
    a=n%10;
    b=((n-a)/10)%10;
    c=((n-((b*10)+a)/10)%10;
    d=((n-((c*100)+(b*10)+a))/10)%10;
    printf("The swapped digit:%d%d%d%d",a,b,c,d);
    return 0;
}```
