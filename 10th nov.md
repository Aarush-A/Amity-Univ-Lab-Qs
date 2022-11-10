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
