#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b , d;
    int i = 1 ;

    printf("veuillez entrer un nombre :");

    scanf("%d" , &a);
    for(b = 1 ; b <= a ; i ++ ){

           d = i * 2;

        if(d % 2 == 0){

            printf("%d\n" , d);

        }
        else{}

        b++ ;
    }
}