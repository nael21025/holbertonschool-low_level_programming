#include "main.h"

int _sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: number
 * Return: square root or -1 if not natural
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper - helper function
 * @n: number
 * @i: current guess
 * Return: sqrt or -1
 */
int _sqrt_helper(int n, int i)
{
    if (i * i > n)
        return (-1);
    if (i * i == n)
        return (i);
    return (_sqrt_helper(n, i + 1));
}
