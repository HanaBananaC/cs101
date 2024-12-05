#include <stdio.h>
int main() {
    int i = 20;
    if (i <= 30) {
        printf("免費\n");
    } else if (i >= 240) {
        printf("240元\n");
    } else {
        int h = ((i - 30) / 30 + 1) * 30;
        printf("%d元\n", h);
    }
    return 0;
}
