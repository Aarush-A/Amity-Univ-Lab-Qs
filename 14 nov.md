//Patterns


```cpp
//* pyramid
#include <stdio.h>

int main()
{
    int n,a,b;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(a=0;a<n;a++){
        for(b=0;b<=a;b++){
            printf("*");
            
        }
        printf("\n");
    }
}
```
![image](https://user-images.githubusercontent.com/93079062/201729696-0fff2d10-3e64-4ad1-b075-3b1c872f46c6.png)

```c
//number pyramid
#include <stdio.h>

int main()
{
    int n,a,b;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(a=0;a<=n;a++){
        for(b=1;b<=a;b++){
            printf("%d",b);
            
        }
        printf("\n");
    }
}
```
![image](https://user-images.githubusercontent.com/93079062/201729790-fc3f36ea-f4c1-460e-8971-e77524e2b7a0.png)

```c
//inverted * pyramid
#include <stdio.h>

int main()
{
    int n,a,b;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(a=n;a>=1;a--){
        for(b=1;b<=a;b++){
            printf("*");
            
        }
        printf("\n");
    }
}
```
![image](https://user-images.githubusercontent.com/93079062/201729905-f37105bb-1046-430e-a7e1-34f8fd868551.png)

