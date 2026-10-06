#include <stdio.h>
int main(void){
    printf("---for loop ---\n");
    for(int i = 1;i<=5;i++){
        printf("i=%d\n",i);
    }
    //
        printf("--- while loop ---\n");
    int sum = 0;
    int n = 1;
    while (n <= 100) {
        sum = sum + n;
        n++;
    }
    printf("Sum 1 to 100 = %d\n", sum);

     // 3. do-while循环：至少执行一次
    printf("--- do-while loop ---\n");
    int count = 10;
    do {
        printf("This runs at least once. count = %d\n", count);
        count++;
    } while (count < 5);

    // 4. 嵌套循环：打印 3x3 矩阵（进阶练习）
    printf("--- nested loop ---\n");
    for (int row = 1; row <= 3; row++) {
        for (int col = 1; col <= 3; col++) {
            printf("(%d,%d) ", row, col);
        }
        printf("\n");
    }

    return 0;
}