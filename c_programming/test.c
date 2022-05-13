/*#include<stdio.h>
int main()
{
    int num=4;
    (num%2==0)?printf("The number is even"):printf("The number is odd");

    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int number=4;
    switch(number){
        case1:
        case2:
        default:
    }
}*/

/*#include<stdio.h>
int main(){
    int number;
    printf("Enter number from 1 to 12: ");
    scanf("%d",&number);

    switch(number){
        case 1:
        printf("January");
        break;

        case 2:
        printf("February");
        break;

        case 3:
        printf("March");
        break;

        case 4:
        printf("April");
        break;

        case 5:
        printf("May");
        break;

        case 6:
        printf("June");
        break;

        case 7:
        printf("July");
        break;

        case 8:
        printf("August");
        break;

        case 9:
        printf("September");
        break;

        case 10:
        printf("October");
        break;

        case 11:
        printf("November");
        break;

        case 12:
        printf("December");
        break;

        default:
        printf("Invalid Number");
        
    }
    return 0;
}*/

//Multiplicationn Table of the number entered by the user.
/*#include<stdio.h>
int main()
{
    int number;
    printf("Multiplication Table of ");
    scanf("%d",&number);
    
    int count=10;
    int product;
    while(count>=1){
        product=number*count;
        printf("%d*%d=%d\n",number,count,product);
        count=count-1;   
    }
    return 0;
}*/

//Program to enter a character value by user and print its value
/*#include<stdio.h>
int main()
{
    char value;
    printf("Enter a character value :");
    scanf("%c",&value);

    printf("Character entered by the user:%d",value);

    return 0;
}*/

//Program to enter a double value by user and print its value.
/*#include<stdio.h>
int main()
{
    double value;

    printf("Enter a double value to be printed:");
    scanf("%lf",&value);

    printf("Value entered by user is %lf",value);

    return 0;
}*/

//Program for addition,multiplication,subtraction of two numbers.
/*#include<stdio.h>
int main(){
    int a,b;

    printf("Enter value of a :");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    int sum=a+b;
    printf("Sum of two numbers is:%d+%d=%d",a,b,sum);

    int mul=a*b;
    printf("\nMultiplication of two numbers is:%d*%d=%d",a,b,mul);

    int sub=a-b;
    printf("\nSubtraction of two number is:%d-%d=%d",a,b,sub);

    return 0;
}*/

//Program to find sum of numbers from 1 to 100
/*#include<stdio.h>
int main(){

    int sum=0;

    for(int i=1; i<=100 ;i++){
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}*/

//Program to find sum of even numbers
/*#include<stdio.h>
int main(){

    int sum=0;

    for(int i=2; i<=100; i=i+2){
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}*/

//Program to find sum of odd numbers from 1 to 100
/*#include<stdio.h>
int main(){

    int sum=0;

    for(int i=1; i<=100; i=i+2){
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}*/

/*#include<stdio.h>
int main(){
    while(1){
    int number;

    printf("Enter a number: ");
    scanf("%d",&number);

    if(number<=0){
        break;
    }
    if((number%2)!=0){
        continue;
    }
    printf("%d\n",number);
    return 0;

    }*/
