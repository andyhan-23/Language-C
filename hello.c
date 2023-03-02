/*
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
*/
/*
#include <stdio.h>

int main(void)
{
    char ch;
    int num;
    double fnum;

    printf("ch 의 바이트 크기: %d\n", sizeof ch);
    printf("num 의 바이트 크기: %d\n", sizeof num);
    printf("fnum 의 바이트 크기: %d\n", sizeof fnum);
    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
    int score = 95;

    printf("90점 이상 100점 이하인가? :%d\n", score >= 90 && score <= 100);

    printf("0점 또는 100점 인가? %d\n", score == 95 || score == 100);

    printf("0점 인가? : %d\n", !score);

    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    double a;
    double b;
    double min, max;

    printf("2개의 정수를 입력하세요: ");
    scanf("%lf %lf", &a, &b);

    min = a < b ? a : b;
    max = a > b ? a : b;

    printf("min : %lf , max:  %lf\n", min, max);

    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
    int num = 69;

    if (num > 87)

        printf("점수가 높습니다.");

    else

        printf("점수가 안높습니다.");

    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
    int score;
    char grade;

    printf("점수를 입력하세요");
    scanf("%d", &score);

    if (score > 90)
    {
        grade = 'A';
    }
    else if (score > 80)
    {
        grade = 'B';
    }
    else if (score > 70)

    {
        grade = 'C';
    }
    else
    {
        grade = 'D';
    }

    printf("%c학점입니다.", grade);

    return 0;
}
*/

#include <stdio.h>

int main(void)
{
    int score;
    char grade;

    printf("점수를 입력하세요");
    scanf("%d", &score);
    if (score < 0 || score > 100)
    {
        printf("오류 입니다.\n");
    }
    else
    {
        if (score > 80)
        {
            grade = 'A';
        }
        else if (score > 70)
        {
            grade = 'B';
        }
        else
        {
            grade = 'F';
        }
        printf("학점은 %c입니다", grade);
    }

    return 0;
}
<test>
