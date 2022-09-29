1a. SUM OF TWO NUMBERS
#include <stdio.h>

int main()
{
    int a,b,sum;
    printf("Enter the two numbers:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("%d + %d = %d", a, b, sum);
    return 0;
}

![image](https://user-images.githubusercontent.com/93079062/192942392-3b071762-7332-4f6a-9f4b-f5c25d5c4492.png)
b. SUM OF THREE NUMBERS 
#include <stdio.h>

int main()
{
    int a,b,c,sum;
    printf("Enter the three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b;
    printf("%d + %d + %d = %d", a, b, c, sum);
    return 0;
}

![image](https://user-images.githubusercontent.com/93079062/192942451-772779df-8c52-4157-9f7b-867ecdb23e09.png)

2.AREA OF CIRCLE
#include <stdio.h>

int main()
{
    int r,area;
    printf("Enter the radius:");
    scanf("%d",&r);
    area=r*r*3.14;
    printf("The area of the circle is: %d",area);
}

![image](https://user-images.githubusercontent.com/93079062/192942495-9861f4db-96c0-489d-8e63-68f19b401919.png)

3.SIMPLE INTEREST
#include <stdio.h>

int main()
{
    int princ,roi,t,final;
    printf("Enter the principal amount:");
    scanf("%d",&princ);
    printf("Enter the rate of interest:");
    scanf("%d",&roi);
    printf("Enter the time:");
    scanf("%d",&t);
    final=princ+((princ*roi*t)/100);
    printf("The final amount is: %d",final);
}

![image](https://user-images.githubusercontent.com/93079062/192943387-375ed2be-c6df-42d4-8c69-d5bf5a5179d8.png)

4.WEIGHT OF ITEMS
#include <stdio.h>

int main()
{
    float w1,w2,q1,q2,avg;
    printf("Enter the weight of item 1:");
    scanf("%f",&w1);
    printf("Enter the weight of item 2:");
    scanf("%f",&w2);
    printf("Enter the quantity of item 1:");
    scanf("%f",&q1);
    printf("Enter the quantity of item 2:");
    scanf("%f",&q2);
    avg=((w1*q1)+(w2*q2))/2;
    printf("The avg weight is: %f",avg);
}

![image](https://user-images.githubusercontent.com/93079062/192943450-e6111e38-724a-4922-88d0-dd56ac4314bc.png)

5.F FROM #
#include <stdio.h>

int main()
{
    printf("######\n#\n#####\n#\n#\n#\n");
    return 0;
}

![image](https://user-images.githubusercontent.com/93079062/192943493-246d7858-b130-4d1c-bc2c-d7e7daf2b6e6.png)

6.a SWAP DIGITS WITH THIRD VARIABLE
#include <stdio.h>

int main()
{
    int v1,v2,temp;
    printf("Enter two numbers:");
    scanf("%d%d",&v1,&v2);
    printf("First Var:%d\n",v1);
    printf("Second Var:%d\n",v2);
    printf("Swapping\n");
    temp=v1;
    v1=v2;
    v2=temp;
    printf("First Var:%d\n",v1);
    printf("Second Var:%d\n",v2);
}

![image](https://user-images.githubusercontent.com/93079062/192943561-38e81dc7-2564-40a8-8b32-a3009a04caff.png)

b. SWAP DIGITS WITHOUT THIRD VARIABLE
#include <stdio.h>

int main()
{
    int v1,v2;
    printf("Enter two numbers:");
    scanf("%d%d",&v1,&v2);
    printf("First Var:%d\n",v1);
    printf("Second Var:%d\n",v2);
    printf("Swapping\n");
    v1=v1+v2;
    v2=v1-v2;
    v1=v1-v2;
    printf("First Var:%d\n",v1);
    printf("Second Var:%d\n",v2);
}

![image](https://user-images.githubusercontent.com/93079062/192943636-a2cb6c02-25cc-49e6-a021-2333df47c7dd.png)

7.CELCIUS TO FAHRENEIT
#include <stdio.h>

int main()
{
    float cel,far;
    printf("Enter temperature in celcius:");
    scanf("%f",&cel);
    far=((cel)*1.8)+32;
    printf("The Temperature in fahreneit is: %f",far);
}

![image](https://user-images.githubusercontent.com/93079062/192943677-248d7e3d-3321-4339-8c8c-9a43baae3e1a.png)
