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
