```c
// Largest element of an array, second largest element, sum of elements and average of elements
#include <stdio.h>
int main(){
    int n,b;
    printf("Enter Number of Elements:");
    scanf("%d",&n);
    int arr[n];
    for(int a=0;a<n;a++){
        printf("Enter element %d:",a);
        scanf("%d",&b);
        arr[a]=b;
    }
    printf("The array is:"); 
    for(int l=0;l<n;l++){
        printf("%d", arr[l]);
     }
    printf("\n");
    int sum=0;
    for(int a=0;a<n;a++){
        sum=sum+(arr[a]);
    }
    printf("The sum of elements is:%d",sum);
    printf("\n");
    
    float avg=0;
    avg=sum/n;
    printf("The average of elements is:%f",avg);
    printf("\n");
    
    int max;
    max=arr[0];
    int arrpos=0;
    for(int a=1;a<n;a++){
        if(arr[a]>max){
            max=arr[a];
            arrpos=a;
        }
    }
    printf("The largest element is: %d",max);
    printf("\n");
    arr[arrpos]=0;
    int max2=arr[0];
    for(int a=1;a<n;a++){
        if(arr[a]>max2){
            max2=arr[a];
        }
    }
    printf("The second largest element is:%d",max2);
   return 0;
}
```
![image](https://user-images.githubusercontent.com/93079062/203901958-a0137c02-fc84-47b7-8a23-29da74c792be.png)

