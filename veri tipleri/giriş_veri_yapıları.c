#include <stdio.h>
#include <stdbool.h>

int main() {
    int age = 25;
    float salary = 2500.50;
    char initial = 'J';
    bool isStudent = true;

    printf("Age: %d\n", age);
    printf("Salary: %.2f\n", salary);
    printf("Initial: %c\n", initial);
    printf("Is student: %s\n", isStudent ? "true" : "false");

    return 0;
}
