//Create a program to find the largest element of an array using pointer
#include<stdio.h>
#include<conio.h>

int main() {
    int arr[5] = {49, 82, 10, 44, 23};

    int largest = *arr;

    for(int i = 1; i < 5; i++) {
        if(largest < *(arr + i)) {
            largest = *(arr + i);
        }
    }
     printf("The largest number is: %d", largest);

    return 0;
}
