//Q4. Write a program to exchange to value using the pointer. (Call by address)

#include <stdio.h>

int swap(int *x,int *y)
{
    int t;
     t   = *x;
    *x   = *y;
    *y   =  t;
}

int main()
{
    int num1,num2;

    printf("Enter value of num1: ");
    scanf("%d",&num1);
    printf("Enter value of num2: ");
    scanf("%d",&num2);

    printf("\nBefore Swapping: num1 is: %d, num2 is: %d\n",num1,num2);

    swap(&num1,&num2);

    printf("After  Swapping: num1 is: %d, num2 is: %d\n",num1,num2);

    return 0;
}