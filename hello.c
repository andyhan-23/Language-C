#include <stdio.h>

int main(void)
{
    float num;
    int i_part;
    float f_part;
    printf("숫자를 입력하세요");
    scanf("%f", &num);

    i_part = num;
    f_part = num - i_part;
    printf("정수는 %d 이며 실수는 %f 입니다.", i_part, f_part);
    return 0;
}