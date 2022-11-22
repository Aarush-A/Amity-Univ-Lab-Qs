```c
//Write a program to find the sum of following series:
//S = 2+4+6+8+……………N terms.

#include <stdio.h>

int main()
{
    int s=0,n;
    printf("Enter N:");
    scanf("%d",&n);
    for(int x=0;x<=(n*2);x+=2){
            s=s+x;
    }
    printf("%d",s);
    return 0;
}
```
![image](https://user-images.githubusercontent.com/93079062/201002030-2481f0d2-ccc9-497b-849f-a091612a3746.png)

```c
//Write a program to check a number whether it is prime number or not.

#include <stdio.h>

int main()
{
    int s,n;
    printf("Enter Number:");
    scanf("%d",&n);
    for(int x=2;x<n;x++){
            if(n%x==0){
                    s=1;
    }
    }
    if(s==1){
            printf("Not Prime");
    }
    else{
            printf("Prime");
    }
    return 0;
}
```
![image](https://user-images.githubusercontent.com/93079062/201001434-bf774f11-6e4a-41af-b45e-229d474eabd1.png)
```c
//Write a program to find the sum of following series:
//1 – 1/2 + 1/3 – 1/4 + 1/5 - …… up to n terms.


#include <stdio.h>

int main()
{
    float s=1,n;
    printf("Enter N:");
    scanf("%f",&n);
    for(float x=3;x<=(n*2);x+=2){
            s=s+(1/x);
    }
    for(float x=2;x<=(n*2);x+=2){
            s=s-(1/x);
    }
    printf("%f",s);
    return 0;
}
```
![image](https://user-images.githubusercontent.com/93079062/201003862-b36df4e5-5959-4f5d-950b-94dda8a367eb.png)
```c
//Write a program to find the sum of following series:
//S = 1/1! + 2/2! + 3/3! + ………….. 7 terms.
#include<stdio.h>
int main()  
{  
    int n= 1, c;  
    float s= 0.0, f; 
    while(n<= 7)  
    {  
        f=1;  
        for(c=1;c<= n;c++)  {  
            f=f*c;  
        }  
        s=s+(n/ f);  
        n++;  
    }  
    printf("Sum:%f\n", s);
    return 0;  
}  
```
![image](https://user-images.githubusercontent.com/93079062/201008139-090048cc-e6a1-466a-9fbb-57f8c62e439f.png)

```c
//Write a program to find the sum of following series: 1! + 2! + 3! + 4! + ….. + n!
#include <stdio.h>
int main()
{
    int f = 1, Sum = 0,N;
    printf("Enter N:");
    scanf("%d",&N);
    for (int i = 1; i <= N; i++) {
        f = f * i;
        Sum += f;
    }
    printf("%d",Sum);
}

```
![image](https://user-images.githubusercontent.com/93079062/201729108-7536199b-8fa1-4931-9d3b-7876da1ac7c4.png)

```c
//Write a program to find the sum of following series: -1^3+3^3-5^3+7^3...to n terms

#include <stdio.h>
int main(){
    int n1,n,n2,a,b,sum=-1;
    printf("Enter N:");
    scanf("%d",&n);
    for(a=3;a<=n*2;a+=4){
        sum=sum+(a*a*a);
    }
    for(b=5;b<n*2;b+=4){
        sum=sum-(b*b*b);
    }
    printf("%d",sum);
}
```
![image](https://user-images.githubusercontent.com/93079062/203366294-26ea5759-2479-48f8-b59b-68db46a65688.png)

