
#include <iostream>

int ackermann (int m, int n) {
    if (m == 0) {
        return n + 1;
    }

    if (m > 0 && n == 0){
        return ackermann(m - 1, 1);
    }

    return ackermann(m - 1, ackermann(m, n - 1));
}

void main () {
    int m = 4;
    int n = 3;

    printf("Ackermann(%d, %d) = %d\n", m, n, ackermann(m, n));
}
