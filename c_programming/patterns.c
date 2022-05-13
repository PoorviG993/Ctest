/*Program to display the pattern
*
* *
* * *
* * * *
#include<stdio.h>
int main(){
    int row,col;
    for(row=1; row<=4; row++){
        for(col=1; col<=row; col++){
         printf("*");   
        }
    printf("\n");
    }
}*/

/*Program to display pattern
1
1 2
1 2 3
1 2 3 4
#include<stdio.h>
int main(){
    int row,col;
     for(row=1; row<=4; row++){
         for(col=1; col<=row; col++){
             printf("%d",col);
         }
    printf("\n");
     }
}*/

//Program to display a dimond pattern.
/*#include<stdio.h>
int main (){
    int i;
    int j, k, l;

    for( i = 1; i <= 4; i++) {
        for (j = 3; j >= i; j--){
            printf("  ");
        }
        for (k=1; k<=i; k++){
            printf(" *");
        }
        for (k=2; k<=i; k++){
            printf(" *");
        }
        printf("\n");
    }
    int p;
    int q , r, s;

    for(p=1; p<=3; p++){
        for(q=1; q<=p; q++){
            printf("  ");
        }
        for(r=3; r>=p; r--){
            printf(" *");
        }
        for(s=2; s>=p; s--){
            printf(" *");
        }
    printf("\n");
    }
    
}*/

/*Program to display