```
//WAP TO CHECK IF A CHARACTER IS A DIGIT OR NUMBER

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter Your Character:");
    scanf("%c",&ch);
    if (ch>='0' & ch<='9'){
        printf("It is a digit");}
    else{
        printf("It is an alphabet");}
    
    return 0;
}
```
![image](https://user-images.githubusercontent.com/93079062/195499730-d2c28cb9-499d-42a9-b7f6-bb30c6f49f21.png)

```
//WAP TO CHECK IF A CHARACTER IS A VOWEL OR CONSONANT

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter Your Character:");
    scanf("%c",&ch);
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        printf("It is a vowel");}
    else{
        printf("It is an consonant");}
    
    return 0;
}
```
![image](https://user-images.githubusercontent.com/93079062/195501330-d91bdab7-9563-41b2-b460-625421802686.png)

```
//WAP TO FIND SMALLEST OF TWO NUMBERS

#include <stdio.h>

int main()
{
    int a,b,sum1,sum2;
    printf("Enter Your Numbers:");
    scanf("%d%d",&a,&b);
    sum1=a-b;
    sum2=b-a;
    if (sum1>sum2){
        printf("A is bigger");}
    else{
        printf("B is bigger");}
    
    return 0;
}
```
![image](https://user-images.githubusercontent.com/93079062/195501592-201339bd-6ce9-4e14-901a-b33c271c79d2.png)

```
//WAP TO FIND GROSS SALARY OF EMPLOYEE IF DA IS 40% OF BASIC SALARY AND IF RA IS 20% OF BASIC SALARY

#include <stdio.h>

int main()
{
    int sal,da,ra,gross;
    printf("Enter Base Salary:");
    scanf("%d",&sal);
    da=sal*0.4;
    ra=sal*0.2;
    gross=sal+da+ra;
    printf("The gross salary is:%d",gross);
    return 0;
}
```
![image](https://user-images.githubusercontent.com/93079062/195505292-fcce7fb9-b0ec-46e6-824e-5e89ff624fee.png)


```
//WAP TO CALCULATE AND PRINT ELECTRICITY BILL, THE CUSTOMER ID, AND UNIT CONSUMED BY THE USER SHOULD BE TAKEN FROM THE KEYBOARD AND DISPLAY THE TOTAL AMOUNT TO PAY TO THE CUSTOMER 
//UPTO 199, 1.20
//200-500 1.8 
//ABOVE 500, 3 
//IF BILL EXCEEDS RS 400 THEN SURCHARGE OF 15% WILL BE CHARGED AND MINIMUM BILL SHOULD BE 100/-
#include <stdio.h>

int main()
{
    int cid; 
    float unc, gross;
    printf("Enter Customer ID:");
    scanf("%d",&cid);
    printf("Enter Unit Consumed:");
    scanf("%f",&unc);
    if(unc<=199){
        gross=unc*1.2;
        if(gross>400){
            gross=gross+(gross*0.15);
            printf("The Customer ID is:%d\n",cid);
            printf("The gross bill is:%f\n",gross);
        }
        else if(gross<100){
            printf("Minimum bill should be INR 100");
        }
        else{
            printf("The Customer ID is:%d\n",cid);
            printf("The gross bill is:%f\n",gross);
        }
    }
    
    else if(unc>=200 & unc<=500){
        gross=unc*1.8;
        if(gross>400){
            gross=gross+(gross*0.15);
            printf("The Customer ID is:%d\n",cid);
            printf("The gross bill is:%f\n",gross);
        }
        else if(gross<100){
            printf("Minimum bill should be INR 100");
        }
        else{
            printf("The Customer ID is:%d\n",cid);
            printf("The gross bill is:%f\n",gross);
        }
    }
    
    else if(unc>500){
        gross=unc*3;
        if(gross>400){
            gross=gross+(gross*0.15);
            printf("The Customer ID is:%d\n",cid);
            printf("The gross bill is:%f\n",gross);
        }
        else if(gross<100){
            printf("Minimum bill should be INR 100");
        }
        else{
            printf("The Customer ID is:%d\n",cid);
            printf("The gross bill is:%f\n",gross);
        }
    }
    
    
}
```
![image](https://user-images.githubusercontent.com/93079062/195504926-b141b099-b748-4c47-99df-b57080180d5c.png)

