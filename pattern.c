/* Write a program in C to print the following pattern:
*
* *
* * * */
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
