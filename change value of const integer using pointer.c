#include <stdio.h>

int main()
{
    const int a=20;     //declare and assign constant integer
    int *p;             //declare integer pointer
    p=&a;               //assign address into pointer p

    printf("Before changing - value of a: %d",a);

    //assign value using pointer
    *p=40;

    printf("\nAfter changing the value of a: %d\n",a);
    //printf("\nWauuuu... value has changed.");

    return 0;
}
