#include <stdio.h>

int prime_check(int num) {
    if (num <= 1) {
        return 0;
    } else {
        for (int i = 2; i<num; i++) {
            if (num % i == 0) {
                return 0;
                //break;
            }
        }
    }
    return 1;
}
int main() {
    int p, num;
    printf("Enter a positive number: ");
    scanf("%d", &num);
    if (prime_check(num)) {
        printf("%d is a prime number.", num);
    } else {
        printf("%d is not a prime number", num);
    }
}