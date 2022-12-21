#include<stdio.h>

int SumofArrNumbers(int *arr, int Size)
{
    int sum = 0;
    for(int i = 0; i < Size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int i, Addition, Size, a[10];
    printf("Please Enter the Size of an Array : ");
    scanf("%d", &Size);

    printf("\nPlease Enter Array Elements  :  ");
    for(i = 0; i < Size; i++)
    {
        scanf("%d", &a[i]);
    }

    Addition = SumofArrNumbers(a, Size);
    printf("Sum of Elements in this Array = %d \n", Addition);
    return 0;
}
