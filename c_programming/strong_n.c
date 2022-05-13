//Program to check wheter a number is a strong number or not.
#include<stdio.h>
int main(){
    int sum=0,num,fact=1,digit,i;
    printf("Enter a number to check if it is a strong number or not: ");
    scanf("%d",&num);
    int temp=num;
    while(temp>0){
        fact=1;
        digit=temp%10;
        for(i=1; i<=digit; i++){
            fact=fact*i;
        }
        sum=fact+sum;
        temp=temp/10;
        fact=1;
    }
    if(sum==num)
        printf("The given number is strong");
    else
        printf("The given number is not a strong number");
    
}