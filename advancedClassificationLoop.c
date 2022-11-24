
#include <stdio.h>
#include <math.h>
#include "NumClass.h"

int isArmstrong(int num)
{
    int save = num;
    int counter = 0;
    while (num != 0)
    {
        counter++;
        num /= 10;
    }
    num = save;
    int sum = 0;
    while (num != 0)
    {
        int digit = num % 10;
        sum += pow(digit, counter);
        num /= 10;
    }
    if (save == sum)
    {
        return 1;
    }
    return 0;
}


int isPalindrome(int num)
{
    int reverseNum = 0;
    int numDigit = num;

    while (numDigit > 0)
    {
        reverseNum *= 10;
        reverseNum += numDigit % 10;
        numDigit /= 10;
    }
    if (reverseNum == num){
        return 1;
    }
    
        return 0;
}
