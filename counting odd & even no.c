#include<stdio.h>
#include<conio.h>
main()
{
    int a[20], n, i, odd,even;
    int *p;
    //clrscr();
    printf("Enter the total no. ");
    scanf("%d", &n);
    printf("Enter %d no. ", n);

    for ( i=0; i<n; i++)
    scanf("%d", &a[i]);

    printf("elements are :");
    p=a;
    for(i=0; i<n; i++)
    {
        printf(" %d", *p);
        p++;
    }
    odd=0;
    even=0;
    p=a;
    for(i=0; i<n; i++)
    {
        if(*p%2==0)
            even++;
        else
            odd++;
        p++;
    }
        printf("\nTotal odd numbers  :%d", odd);
        printf("\nTotal even numbers :%d", even);
        getch();
}
