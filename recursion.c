#include <stdio.h>

int fact(int n) {
    if (n == 1)       // Base Case
        return 1;
    else
        return n * fact(n - 1);  // Recursive Call
}

int main() {
    int num = 5;
    printf("Factorial of %d = %d", num, fact(num));
    return 0;
}