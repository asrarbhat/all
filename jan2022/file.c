#include <stdio.h>
#include <math.h>

int is_prime(int);

int main()
{
    for (int i = -7; i < 10; i++)
    {
        printf("%d %d\n", i, is_prime(i));
    }
    return 0;
}
/**
 * @brief return 1 if input is prime and 0 if not and -1 if invalid input
 * 
 * @param number an integer greater than 1
 * @return int 1 if input is prime and 0 of not and -1 if invalid input
 */
int is_prime(int number)
{
    if (number < 2)
    {
        return -1;
    }
    if (number % 2 == 0 && number != 2)
    {
        return 0;
    }
    int upper_limit = (int)ceil(sqrt(number));
    for (int i = 3; i <= upper_limit; i += 2)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}