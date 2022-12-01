```c 
/*\\Write a program in C to print the following pattern:
* * *
* * *
* * **/
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter Rows & Columns:");
    scanf("%d",&a);
    for(int x=0;x<a;x++){
        for(int y=0;y<a;y++){
            printf("* ");
        }
        printf("\n");
    }
}
```
![image](https://user-images.githubusercontent.com/93079062/204966030-066fdb41-1503-4798-af1c-5c6c3627044b.png)
```c
/*Write a program in C to print the following pattern:
1 2 3
1 2 3
1 2 3
*/
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter Rows & Columns:");
    scanf("%d",&a);
    for(int x=0;x<a;x++){
        for(int y=1;y<a+1;y++){
            printf("%d ",y);
        }
        printf("\n");
    }
}
```
![image](https://user-images.githubusercontent.com/93079062/204966322-ecfd2fc1-abf1-4bed-b438-2e78019bea16.png)
```c
/*Write a program in C to print the following pattern:
1 1 1
2 2 2
3 3 3
*/
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter Rows & Columns:");
    scanf("%d",&a);
    for(int x=1;x<a+1;x++){
        for(int y=0;y<a;y++){
            printf("%d ",x);
        }
        printf("\n");
    }
}
```
![image](https://user-images.githubusercontent.com/93079062/204966521-e677865b-eda1-4686-8c14-1ad12752eba3.png)
```c
/*Write a program in C to print the following pattern:
3 2 1
3 2 1
3 2 1
*/
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter Rows & Columns:");
    scanf("%d",&a);
    for(int x=a;x>0;x--){
        for(int y=a;y>0;y--){
            printf("%d ",y);
        }
        printf("\n");
    }
}
```
![image](https://user-images.githubusercontent.com/93079062/204967067-44b6ece9-6d8d-48f1-8232-e33647da6b44.png)

```c
/*Write a program in C to print the following pattern:
3 3 3
2 2 2
1 1 1
*/
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter Rows & Columns:");
    scanf("%d",&a);
    for(int x=a;x>0;x--){
        for(int y=a;y>0;y--){
            printf("%d ",x);
        }
        printf("\n");
    }
}
```
![image](https://user-images.githubusercontent.com/93079062/204966766-60a394fe-bebb-474e-af4e-77ccd53a4d14.png)
