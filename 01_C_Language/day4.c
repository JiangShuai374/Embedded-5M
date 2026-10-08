#include <stdio.h>

int main(void) {
    // 1. Array definition and initialization
    int arr[5] = {10, 20, 30, 40, 50};

    // 2. Access array elements (index starts from 0)
    printf("--- Access array ---\n");
    printf("arr[0] = %d\n", arr[0]);
    printf("arr[4] = %d\n", arr[4]);

    // 3. Traverse array
    printf("--- Traverse array ---\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // 4. Sum and Average
    printf("--- Sum and Average ---\n");
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum = sum + arr[i];
    }
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", sum / 5.0);

    // 5. Input array from keyboard
    printf("--- Input array ---\n");
    int input_arr[3];
    printf("Please enter 3 integers (space separated): ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &input_arr[i]); 
    }
    printf("You entered: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", input_arr[i]);
    }
    printf("\n");

    // 6. Find Maximum value
    printf("--- Find Max ---\n");
    int max = arr[0]; 
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Max value = %d\n", max);

    return 0;
}