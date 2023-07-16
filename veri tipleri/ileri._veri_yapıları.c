#include <stdio.h>

enum Days { MON = 1, TUE, WED, THU, FRI, SAT, SUN };

union Data {
    int num;
    float dec;
    char letter;
};

typedef int (*MathFunction)(int, int);

int add(int a, int b) {
    return a + b;
}

int main() {
    enum Days today = WED;

    union Data data;
    data.num = 42;

    MathFunction mathFunc = add;

    int result = mathFunc(10, 5);

    printf("Today: %d\n", today);
    printf("Data: %d\n", data.num);
    printf("Result: %d\n", result);

    return 0;
}
