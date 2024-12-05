#include <stdio.h>

int main() {
    int x = -9, y = 9, z = 1;
    if (x < 0) {
        int sum = (x * -1) * 100 + y * 10 + z;
        printf("-%d\n", sum);
    } else {
        printf("%d\n", x * 100 + y * 10 + z);
    }
    
  return 0;
}

