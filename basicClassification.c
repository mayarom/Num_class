
#include <stdio.h>
#include <math.h>
#include "NumClass.h"
int factor(int);

int isPrime(int num)
{
    if (num < 1)
        return 0;
    if (num == 2 )
        return 1;
    if (num == 1)
        return 1;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
int factor(int num)
{
    if (num < 0){
        return 0;
    }
    if (num == 0)
        return 1;

    int ans= num;

    while (num!=1)
    {
        ans = ans * (num-1);
        num=  num-1;
    }
    return ans;
  
}
int isStrong(int num)
{
    if (num <= 0){
        return 0;
    }
    int save_num = num;
    int sum = 0;

    while (num > 0)
    {
        sum = sum + factor(num % 10);
        num /= 10;
    }
    if (sum == save_num)
    {
        return 1;
    }
    return 0;
}

