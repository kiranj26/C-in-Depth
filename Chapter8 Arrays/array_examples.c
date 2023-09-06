#include<stdio.h>
#include<math.h>
#include <unistd.h>

#define SIZE 10
int main (int argc, char **argv)
{
    /* // PROBLEM 1 : Program to add elements in an array
    int arr[SIZE];

    // scan elements to be added into an array
    for(int i=0;i<SIZE;i++)
    {
        scanf("%d",&arr[i]);
    }

    // add elemenets in an array
    int sum =0;
    for (size_t i = 0; i < SIZE; i++)
    {
        sum += arr[i];
    }
    printf("Sum = %d\n", sum); */

    /* // PROBLEM 2 : Program to count even and odd numbers in an array
    int arr[SIZE];

    // scan elements to be added into an array
    for(int i=0;i<SIZE;i++)
    {
        scanf("%d",&arr[i]);
    }
    int even =0,odd = 0;
    // main logic
    for (int i= 0 ;i < SIZE ;i++)
    {
        if(arr[i] % 2 == 0)
        {
            // even number
            even++;
        }else{
            odd++;
        }
    }
    printf("Even Number = %d, odd Number = %d", even, odd); */

    /* // PROBLEM 3 : Find the smallest and largest element in an array
    int arr[SIZE];

    // scan elements to be added into an array
    for(int i=0;i<SIZE;i++)
    {
        scanf("%d",&arr[i]);
    }
    int smallest = arr[0] ,largest = arr[0];
    for(int i=0;i<SIZE;i++)
    {
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    printf("Smallest = %d, largest = %d\n", smallest,largest); */

    // PROBLEM 4: 
    
}