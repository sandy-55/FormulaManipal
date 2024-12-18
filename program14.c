//Program 14

#include <stdio.h>

int fibo(int z); //function prototype
int main() 
{
    int n;
    printf("Enter the position of the Fibonacci term: ");
    scanf("%d", &n);

    printf("The %dth term of the Fibonacci series is: %d\n", n, fibo(n));

    return 0;
}

int fibo(int n) 
{
    if (n <= 1)
    {
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}
