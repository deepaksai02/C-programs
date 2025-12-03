#include <stdio.h>

// Function to calculate sum of digits
int digitSum(long long n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Recursive function to find super digit
int superDigit(long long n) {
    if (n < 10) {
        return (int)n;  // Base case: single digit
    }
    return superDigit(digitSum(n));
}

int main() {
    long long n;
    printf("Enter a number: ");
    scanf("%lld", &n);

    int result = superDigit(n);
    printf("Super digit of %lld is: %d\n", n, result);

    return 0;
} 
