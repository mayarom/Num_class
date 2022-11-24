#include <stdio.h>
#include <math.h>
#include "NumClass.h"
int reverse(int,int);
int isArmstrong_rec(int,int);

int isPalindrome(int num)
{
    int builder = reverse(num, 0);
    if (num == builder){
        return 1;
    }
        return 0;
}
int reverse(int num, int builder)
{
    if (num == 0){
        return builder;
    }
    builder = (builder * 10) + (num % 10);
    return reverse(num / 10, builder);
}


int isArmstrong(int num)
{
    int sum = 0, digits = 0;
    int copy_num = num;
    while (copy_num != 0)
    {
        digits = digits + 1;
        copy_num = copy_num / 10;
    }
    sum = isArmstrong_rec(num, digits);
    if (sum == num){
        return 1;
    }
        return 0;
}


int isArmstrong_rec(int num, int digits)
{
    int lastDigit, sum = 0;
    if (num > 0)
    {
        lastDigit = num % 10;
        sum = sum + pow(lastDigit, digits);
        sum += isArmstrong_rec(num / 10, digits);
        return sum;
    }
        return 0;
}