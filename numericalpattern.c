/*Write a program in C to print the following pattern:
3
3 2
3 2 1
*/
#include <stdio.h>

int main()
{
    int n,a,b;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(a=n;a>0;a--){
        for(b=n;b>=a;b--){
            printf("%d",b);
        }
        printf("\n");
    }
}
