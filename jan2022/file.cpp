#include <iostream>
#include <cmath>
using std::cout;
using std::endl;

int is_prime(int);
int main()
{
    for (int i = -9; i < 10; i++)
    {
        cout << i << " " << is_prime(i) << endl;
    }
    return 0;
}
/**
 * @brief return 1 if input is prime and 0 if not and -1 if invalid input
 * 
 * @param number an integer greater than 1
 * @return int 1 if input is prime, 0 if not and -1 for invalid input
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