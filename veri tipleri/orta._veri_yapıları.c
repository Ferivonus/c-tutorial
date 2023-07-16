#include <stdio.h>
#include <string.h>

float calculateAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    float average = calculateAverage(numbers, 5);
    char name[20];
    strcpy(name, "John Doe");
    int* pointer = NULL;

    printf("Average: %.2f\n", average);
    printf("Name: %s\n", name);

    return 0;
}
