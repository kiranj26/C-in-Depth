#include<stdio.h>
#include<math.h>
#include <unistd.h>

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

// P5.14 : Febonnaci Series
/* int main()
{
    int n= 10;
    int x=0;
    int y=1;
    int z;

    printf("%d\t",y);

    for (int i=1;i<n;i++)
    {
        z=x+y;
        printf("%d\t",z);
        x=y;
        y=z;
    }
    printf("\n");

} */

// P5.14: Armstrong Number
/* int main()
{
    for(int n = 100;n <9999;n++){
        int num=n;
        int reslt = 0;
        int rem;
        int orig_num = num;
        while(num>0)
        {
         rem  = num%10;
         reslt += (rem * rem * rem);
         num /=10;
        }
        if(orig_num == reslt){
        printf("Result = %d\n",reslt);

        }
    }
} */

// P 5.15 : Sum of series of numbers 
// 538769 -> 38 -> 11 ->2
/* 
int main()
{
    int num = 538769;
    int rslt;
    for (int n = num;n>0;n = rslt){   
        int rem=0;
        rslt=0; 
        while (n>0)
        {   
            rem = n%10;
            rslt += rem;
            n = n/10;
        }
        printf("%d\t",rslt);
        sleep(0.1);
    }
} */

// Additonal Programs

/* // Problem 1: program to write wather a date entered is valid valid or not. Assume dates between 1850 and 2015 are valid

int main()
{
    int d,m,y;
    int flag;
    int isleap = 0;
    printf("Enter dates in the format of day/month/year\n");
    scanf("%d/%d/%d",&d,&m,&y);

    if(y%100  != 0 && y%4 ==0 || y%400 == 0)
    {
        isleap = 1;
    }
    if(y<1850 || y>2050 || m<1 || m>12 || d<1 || d>31)
    {
        flag =0;
    }
    else if (m ==2)
    {
        if(d == 3 || d ==31 || (d ==29 && !isleap))
        {
            flag = 0;
        }
    }
    else if (m ==4 || m==6 || m==9 || m==11) 
    {
        if (d ==31)
        {
            flag =0;
        }
    }

    if(flag == 0)
    {
        printf("Date is invalid\n");
    }else{
        printf("Date is valid\n"); 
    }


}
 */


