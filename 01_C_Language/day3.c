#include <stdio.h>

int main(void) {
    int choice;
    int a, b;

    // 1. 打印菜单 (改成英文)
    printf("=== Menu ===\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Exit\n");
    printf("Please enter choice (1-3): ");

    // 2. 获取用户输入
    scanf("%d", &choice);

    // 3. switch 分支
    switch (choice) {
        case 1:
            printf("Enter two integers (space separated): ");
            scanf("%d %d", &a, &b);
            printf("Result: %d + %d = %d\n", a, b, a + b);
            break;
        case 2:
            printf("Enter two integers (space separated): ");
            scanf("%d %d", &a, &b);
            printf("Result: %d - %d = %d\n", a, b, a - b);
            break;
        case 3:
            printf("Exited.\n");
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    // 4. 演示 continue
    printf("\n--- continue demo (skip 4) ---\n");
    for (int i = 1; i <= 6; i++) {
        if (i == 4) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}