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
