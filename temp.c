#include <stdio.h>

void main()
{
    int N = 20, num, digit;
    int sumOddDigits = 0;
    int sumEvenDigits = 0;
    int i = 1;

    while (i <= N) // 1 <= 20 -> t
    {
        num = i; // num = 1
        while (num > 0)
        {
            digit = num % 10;
            num /= 10;

            if (digit % 2 == 0)
            {
                // Digit is even
                sumEvenDigits += digit;
            }
            else
            {
                // Digit is odd
                sumOddDigits += digit;
            }
        }
        i++;
    }

    // Print the results
    printf("Sum of odd digits: %d\n", sumOddDigits);
    printf("Sum of even digits: %d\n", sumEvenDigits);
}