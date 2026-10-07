#include <stdio.h>
int main() {
    int choice;
    int a, b;
    //
    printf("===控制台菜单===\n");
    printf("1. 加法\n");
    printf("2. 减法\n");
    printf("3. 退出\n");
    printf("请输入选项 (1-3):");
    //
    scandf("%d",&choice);
    //
    switch (choice) {
        case 1:
            printf("请输入两个整数 (空格隔开): ");
            scanf("%d %d", &a, &b);
            printf("结果: %d + %d = %d\n", a, b, a + b);
            break; // 必须加 break，否则会继续执行 case 2！
        case 2:
            printf("请输入两个整数 (空格隔开): ");
            scanf("%d %d", &a, &b);
            printf("结果: %d - %d = %d\n", a, b, a - b);
            break;
        case 3:
            printf("已退出。\n");
            break;
        default:
            printf("无效选项！\n");
            break;
    }

    // 4. 演示 continue (输出1到6，跳过4)
    printf("\n--- 演示 continue (跳过4) ---\n");
    for (int i = 1; i <= 6; i++) {
        if (i == 4) {
            continue; // 跳过本次循环，直接进入下一次
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;

    }