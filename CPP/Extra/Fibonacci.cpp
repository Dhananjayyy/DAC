#include <iostream>

int fibonacci(int n) {
    if (n<0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 0;
    }
    else
    {
        int a = 0, b = 1, fib = 0;
        for(int i=2;i<=n;i++)
        {
            fib = a+b;
            a=b;
            b=fib;
        }
        return fib;
    }
}

int main() {
    int n;

    std::cout << "Enter the value of n: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Please enter a non-negative integer." << std::endl;
        return 1; // Exit with an error code
    }

    std::cout << "Fibonacci(" << n << ") = " << fibonacci(n) << std::endl;

    return 0; // Exit with success code
}
