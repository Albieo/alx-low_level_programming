#include "main.h"

int real_root(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: input
*/
int _sqrt_recursion(int n)
{
    if (n < 0)
    {
        return (0);
    }
    else if (n <= 1)
    {
        return (1);
    }
    else
    {
        return (real_root(n, 0));
    }
}
/**
 * real_root - find the square root of a number.
 *
 * @n: input
 * @i: iterator
*/
int real_root(int n, int i)
{
    if (i * i > n)
    {
        return (-1);
    }
    else if (i * i == n)
    {
        return (i);
    }
    else
    {
        return (real_root(n, i + 1));
    }
}
