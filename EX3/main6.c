#include <stdio.h>

int main() {
    int i = 1000;
    if (i <= 1500) {
        printf("70元\n");
    } else {
        int n = i - 1500;
        int h = (n / 100 + (n % 100 > 0 ? 1 : 0)) * 10;
        printf("%d元\n", 70 + h);
    }
    return 0;
}
