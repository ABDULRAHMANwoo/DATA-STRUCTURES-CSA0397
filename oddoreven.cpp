#include<stdio.h>

int main()
{
    int num;
 	printf("Entr no : ");
    scanf("%d",&num);
 
    if(num % 2 == 0)
        printf("Even");
    else
        printf("Odd");
     
    return 0;
}