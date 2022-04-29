//Program to print a sentence
/*#include<stdio.h>
int main()
{
    printf("My name is Poorvi");

    return 0;
}*/

//Program to print an integer entered by the user
/*#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Value of a is:%d",a);
    return 0;
}*/

//Program to add two integers enetered by user
/*#include<stdio.h>
int main(){
    int a,b,sum;
    //printf("Enter a number:");
    //scanf("%d",&a);
    //printf("Enter another number:");
    //scanf("%d",&b);
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("Sum of two numbers is:%d+%d=%d",a,b,sum);
    return 0;
    }*/

//Program to multiply two floating-point numbers
/*#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter a floating-point number:");
    scanf("%f",&a);
    printf("Enter  another number:");
    scanf("%f",&b);
    c=a*b;
    printf("Multiplication of these numbers is %f*%f=%.3f",a,b,c);
    return 0;
}*/

//Program to find ASCII value of a character entered by the user
/*#include<stdio.h>
int main()
{
    char word;
    
    printf("Enter a character:");
    scanf("%c",&word);
    printf("The ASCII value of the word is%c:%d",word,word);
    
    return 0;
}*/


//Program to find quotient and remainder of two integers
/*#include<stdio.h>
int main()
{
    int a,b;
    float quo,rem;

    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    quo=a/b;
    printf("Quotient of two numbers is %f:\n",quo);
    rem=a%b;
    printf("Remainder of two numbers is %f:",rem);

    return 0;
}*/

//Program to find the size of int, float , doble and char
/*#include<stdio.h>
int main()
{
    int intType;
    float fType;
    double dType;
    char cType;
    printf("The size of the data-type int is:%zu bytes\n",sizeof(intType));
    printf("The size of float data-type is:%zu bytes\n",sizeof(fType));
    printf("The size of the double data-type is:%zu bytes\n",sizeof(dType));
    printf("The size of the character data-type is:%zu bytes\n",sizeof(cType));
    
    return 0;
}*/

//Program to demonstrate the working of keyword long
/*#include<stdio.h>
int main()
{
    int intType;
    long integer;

    printf("Size of intType is:%zu bytes\n",sizeof(intType));
    printf("Size of integer is:%zu bytes\n",sizeof(integer));

    return 0;

}*/

//Program to swap two numbers
/*#include<stdio.h>
int main()
{
    int a , b, temp;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("Values before swapping:%d %d",a,b);

    temp=a;
    a=b;
    b=temp;

    printf("\nValues after swapping two numbers:%d %d",a,b);

    return 0;
}*/

