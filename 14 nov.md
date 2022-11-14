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
```
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
```
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
