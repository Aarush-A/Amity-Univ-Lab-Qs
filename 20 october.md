```//(a) Write a C program to check whether a triangle is Equilateral, scalene, or isosceles

#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter Side 1:");
    scanf("%d",&a);
    printf("Enter Side 2:");
    scanf("%d",&b);
    printf("Enter Side 3:");
    scanf("%d",&c);
    if('a'=='b' & 'b'=='c' & 'c'=='a')
    {
        printf("The triangle is equilateral");
    }
    else if('a'!='b' & 'b'!='c' & 'c'!='a')
    {
        printf("The triangle is scalene");
    }
    else{
        printf("The triangle is isosceles");
    }
    return 0;
}
```
![image](https://user-images.githubusercontent.com/93079062/196854851-ee884af1-c781-4bb1-8e1f-a8a3ab76f1b1.png)
```
//Write a C program to check whether a triangle is right angles, obtuse, acute triangle 

#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter Angle 1:");
    scanf("%d",&a);
        printf("Enter Angle 2:");
    scanf("%d",&b);
    printf("Enter Angle 3:");
    scanf("%d",&c);
    if(a==90 || b==90 || c==90)
    {
        printf("The triangle is right angled");
    }
    else if(a>90 || b>90 || c>90)
    {
        printf("The triangle is obtuse angled");
    }
    else if(a<90 || b<90 || c<90)
    {
        printf("The triangle is acute angled");
    }
    return 0;
}
```
![image](https://user-images.githubusercontent.com/93079062/196855507-7e1b043d-9f33-4b81-8313-93227b838304.png)
```
//WAP to to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.
#include <stdio.h>

#include <stdio.h>
void main()
{
	int a,b;

	printf("Input the values for X and Y coordinate : ");
	scanf("%d %d",&a,&b);

	if( a > 0 && b > 0)
	  printf("The coordinate point lies in the First quandrant.\n");
	else if( a < 0 && b > 0)
	  printf("The coordinate point lies in the Second quandrant.\n");
	else if( a < 0 && b < 0)
	  printf("The coordinate point lies in the Third quandrant.\n");
	else if( a > 0 && b < 0)
	  printf("The coordinate point lies in the Fourth quandrant.\n");
	else if( a == 0 && b == 0)
	  printf("The coordinate point lies at the origin.\n");

}  
```
![image](https://user-images.githubusercontent.com/93079062/196857851-daf2f1ac-d2b3-4f6b-9c1e-f04abf4697f7.png)
```
