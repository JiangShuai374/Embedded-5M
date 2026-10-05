#include <stdio.h>

int main(void){
    
    int age = 18;
    int score = 95;
    //
    float height =1.75f;
    double pi = 3.14159;
    //
    char gender = 'M';
    //
    printf("Age:%d\n",age);
    printf("Score:%d\n",score);
    printf("Height:%f\n",height);
    printf("Pi:%.5f\n",pi);
    printf("Gender:%c\n",gender);
    //
    int a = 10;
    int b = 3;
    printf("a + b = %d\n",a+b);
    printf("a - b = %d\n",a-b);
    printf("a * b = %d\n",a*b);
    printf("a / b = %d\n",a/b);
    printf("a %% b = %d\n",a%b);
    //
    return 0;
}