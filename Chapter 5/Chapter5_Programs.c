#include<stdio.h>
#include<math.h>

/* P5.9 : Program to print numbers in reverse with the diff of 3
int main()
{
    int num = 13;
    while(num>0)
    {
        printf("%d\t",num);
        num-=2;
    }
    printf("\n");

} */

//P5.10: Program to print sum of digits of any number
/* int main()
{
    int num=12345;
    int rem=0;
    int sum=0;
    int original_num = num;

    while(num>0)
    {
        rem = num % 10;
        sum += rem;
        num = num/10;
    }
    printf("The sum of numer %d is %d\n",original_num,sum);
}  */


//P5.11: Program to print product of digits of any number
/* int main()
{
    int num=123456;
    int rem=0;
    int prod=1;
    int original_num = num;

    while(num>0)
    {
        rem = num % 10;
        prod *= rem;
        num = num/10;
    }
    printf("The prod of numer %d is %d\n",original_num,prod);
}  */

// P5.12 : Factorial of any number
/* int main()
{
    int num = 9;
    int org_num = num;
    long int fact =1;
    while(num > 0)
    {
        fact = fact * (num--);
    }
    printf("Factorial of %d is %ld\n",org_num,fact);

} */

// P5.13 : Binary To Decimal Cobversion
/* int main()
{
    int b_no = 1111;
    int or_b_no = b_no;
    int rem = 0;
    int d=0;
    int dec_no=0;

    while (b_no >  0)
    {
        rem = b_no %10;
        dec_no += (rem * (pow(2,d++)));
        b_no = b_no /10;
    }

    printf("Binary Number : %d \nDecimal Number = %d\n",or_b_no,dec_no);
} */

// P5.14 : 

