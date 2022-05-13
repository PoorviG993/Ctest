//Program to display the 'n' terms of odd natural number and their sum
#include<stdio.h>
int main(){
    int range,sum=0,i;
    printf("Enter the range to find the oddd natural numbers: ");
    scanf("%d",&range);

    for(i=1 ; i<=range; i=i+2){
            sum=sum+i;
            printf("%d\n",i);
    }
    printf("Sum of odd natural numbers is: %d",sum);
}
