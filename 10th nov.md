```
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

```
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
```
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
```
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

```
//Write a program to find the sum of following series: 1! + 2! + 3! + 4! + ….. + n!
#include<stdio.h>
int main()  
{  
int i,n,f=1;
float sum=0.0;
printf("Enter Value of n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
f=f*i;
sum=sum+(f/i);
}
printf("The value of series is %f",sum);
}
```
![image](https://user-images.githubusercontent.com/93079062/201008932-56a972ad-1330-4a52-8100-e34bf6c4ad0a.png)
```
//Write a program to find the sum of following series: -1^3+3^3-5^3+7^3...to n terms

#include<stdio.h>
#include<math.h>
int main() {
	int n,i;
	int sum=0;
	printf("Enter N: ");
	scanf("%d",&n);
	sum = pow(((n * (n + 1) ) / 2),2);
	printf("Sum:");
	for (i =1;i<=n;i++) {
		if (i != n)
		             printf("%d^3 + ",i); 
		             else
		             printf("%d^3 = %d ",i,sum);
	}
	return 0;
}
```
![image](https://user-images.githubusercontent.com/93079062/201009395-e31344cf-6ed4-4395-8802-ecf672a7eb41.png)
