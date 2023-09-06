#include<stdio.h>
#include<math.h>
#include <unistd.h>

#define SIZE 10
int main (int argc, char **argv)
{
    // 1D ARRAY
    // ----------------------------------------------------------------
    // DECLARATION OF 1D ARRAY
    // ----------------------------------------------------------------
    // declaring an array
    int array_size = 100;
    int arr[array_size];    // Invalid (Will not give error though)
    int arr1[SIZE] = {0};         // VALID and more accurate way to define n array usin constants
    // thing above is not advisavble always use constants or use # define

    int arr2 [100];
    char char_arra[20];
    float float_arra[200];

    // Acessing 1D array elements
    for (int i=0;i<SIZE;i++)
    {
        printf("%d ",arr1[i]); // one way normally using subscript
        printf("%d \t",*(arr1 + i)); // using pointer arithmatic
    }
    printf("\n");
    // NOTE : 
    // no inbuilt array bound checking in C for arrays
    // developer has to be extra careful in accessing elements beyond array bounds
    // for example accessing an array element from SIZE + 3 location 
    // BELOW THING WILL NOT THROW ERROR will show some random value
    printf("%d \t",*(arr1 + ( SIZE + 3) ));

    // ----------------------------------------------------------------
    // INITIALISATION OF 1D ARRAY
    // ----------------------------------------------------------------
    // NOTE:
    // if declared local without values in intialisation it will have garbage values
    // If declared globally or ehich statis will have values 0

    // NOTE:
    // declaring wthout size if done using as follows
    int arr3[] = {10,20,30,40,50,60,70,80,90,100}; // doesnt throw error

    // NOTE: below remainning values will be declared with value of 0
    int arr4[10] = {1,1};
    // value starting from arr[2] will be all zeros
    printf("arrvalue at index 9 = %d\n", arr4[9]);  

    // NOTE: cant define value for size which is not defined
    // int arr[5] = {1,2,3,4,5,6,7,8,9,0}; // WILL throw error

    // NOTE: We cannot copy elements from one array to another simply by doing arr1 = array2
    // we have to loop through all the elements like this array1[i] = array2[i]

    





}