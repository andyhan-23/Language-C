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

/*
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
*/
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20];
	char str2[20];

	printf("이름을 입력하세요");
	gets_s(str1);
	
	sprintf_s(str2, "%s씨 안녕하세요", str1);
	puts(str2);

	return 0;
}
*/
/*
#include <iostream>
#include<fstream>

using namespace std;

struct profile {
	char name[20];
	int age;
	char address[20];
};
void main() {
	profile man = { "한재혁", 25, "서울" };

	ofstream fout;

	fout.open("profile.dat");
	fout << man.name << "" << man.age << "" << man.address << endl;
	fout.close();
}
*/
/*
#include <iostream>
#include<fstream>
using namespace std;

struct profile {
	char name[20];
	int age;
	char address[20];
};

void main() {
	profile man;
	ifstream fin;

	fin.open("C:\Users\andyh\source\repos\Project1");
	if (fin.fail()) {
		cout << "파일 오프엔 실패함" << endl;
		return;
	}

	fin >> man.name >> man.age >> man.address;

	cout << man.name << "" << man.age << "" << man.address << endl;

	fin.close();
}
*/

/*
#include <iostream>
#include<fstream>
using namespace std;

void main() {
	char ch;
	while (cin.get(ch))
		cout.put(ch);
}
*/

/*
#include<stdio.h>
int main(void) {
	int sum=0, i, sum1=0;
	

	for (i = 1; i <= 10; i++) {
		sum = sum + i;
	}
	printf("1부터 10까지의 합은: %d\n", sum);

	for (i = 1; i <= 100; i++) {
		sum1 = sum1 + i;
	}
	
	printf("1부터 100까지의 합은: %d", sum1);
	return 0;
}
*/

/*
#include <stdio.h>

int getSum(int num)
{
	int i, sum;
	for (i = 1, sum = 0; i <= num; i++)
		sum = sum + i;
	return sum;
}

int main(void) {
	int sum, num;
	printf("계산기 프로그램:\n");
	printf("값을 입력하세요!\n");
	scanf_s("%d", &num);
	sum = getSum(num);
	printf("합계: %d", sum);
	return 0;
}
*/

/*
#include <stdio.h>

int sumFunction(int num1, int num2)
{
	int sum;
	sum = num1 + num2;
	return sum;
}

int main(void)
{
	int result;
	int num1,num2;
	printf("두 수의 합을 구하시오\n");
	scanf_s("%d %d", &num1, &num2);
	result = sumFunction(num1, num2);
	printf("결과: %d", result);
	return 0;
}
*/

/*
#include<stdio.h>

void hello(void)
{
	printf("hello world");

	printf("bye");
}

void bye(void)
{
	printf("bye");
	return;
	printf("hello");
}

int main(void)
{
	hello();
	bye();

	return 0;
}
*/

/*
#include<stdio.h>

int max (int a, int b, int c)
{
	int max;
	max = a > b ? a : b;
	max = c > max ? c : max;

	return max;
}

int main(void)
{
	int result1, result2;
	int num1, num2, num3;
	printf("최대값 찾기");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	result1 = max(num1, num2, num3);
	printf("결과 :  %d\n", result1);

	result2 = max(14, 67, 45);
	printf("결과 : %d\n", result2);

	return 0;
}
*/

/*
#include <stdio.h>

void swap(int a, int b)
{
	int temp;
	
	temp = a;
	a = b;
	b = temp;
}

int main(void)
{
	int a = 10;
	int b = 20;
	swap(a, b);
	printf("결과: %d %d", a, b);
	
	return 0;
}
*/
/*
#include <stdio.h>

int main(void) {
	int array[10];
	int size = sizeof(array);
	printf("결과: %d", size);
	
	return 0;
}
*/
/*
#include <stdio.h>

int main(void) {
	int array[5];
	
	array[0] = 10;
	array[1] = 20;
	array[2] = 30;
	array[3] = 40;
	array[4] = 50;

	for (int i=0; i<=4; i++)
		printf("array[%d] =%d\n", i, array[i]);

	return 0;
}
*/


/*
	# include <stdio.h>
	# define MAX 5

	int main(void)
{

	int array[MAX] = { 0 };
	int i;
	int sum = 0;
	double average;

	printf("%d개의 정수를 입력하세요:", MAX);
	
	for (i = 0; i < MAX; i++)
		scanf_s("%d", &array[i]);

	for (i = 0; i < MAX; i++)
		sum = sum + array[i];

	average = double(sum) / 5;
	
	printf("합계: %d, 평균: %lf", sum, average);

	return 0;

}
*/

/*
#include <stdio.h>

#define SIZE 5
int main(void)
{
	int i, j, index, temp;
	int array[SIZE] = { 2,45,4, 123,24 };

	for (i = 0; i < SIZE - 1; i++)
	{
		index = i;
		for (j = i + 1; j < SIZE; j++)
		{
			if (array[index] > array[j])
			{
				index = j;
			}
			
		}
		
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
		
	}
	printf("정렬결과:");
	for (i = 0; i < SIZE; i++)
		printf("%d\n", array[i]);
	
	return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
	int i, j;

	int data[2][3];

	data[0][0] = 1;
	data[0][1] = 2;
	data[0][2] = 3;
	data[1][0] = 4;
	data[1][1] = 5;
	data[1][2] = 6;

	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			printf("%d", data[i][j]);
			printf("\n");
		}
		
	}
	return 0;

}
*/

/*
#include <stdio.h>

int main(void)
{
	char str[4];
	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = 'd';

	for (int i = 0; i < 4; i++)
	{
		printf("%c\n", str[i]);
	}
	return 0;
}
*/

/*
#include<stdio.h>
#include<string.h>

int main(void)
{
	char word1[20];
	char word2[20];

	strcpy_s(word1, "hello");
	printf("%s\n", word1);
	strcpy_s(word2, word1);
	printf("%s\n", word2);

	return 0;
}
*/

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[6] = "hello";
	
	printf("%d\n", strlen(str));
	printf("%d\n", strlen("adasdasdasd"));
	return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[20] = "abcde";

	strcat_s(str, "12345");
	printf("%s", str);
	return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>

int main(void) {

	char str[20];

	printf("이름을 입력하세요:\n");
	
	scanf_s("%s", &str,20);
	printf("이름: %s", str);
	return 0;
}
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20];
	char str2[20];

	printf("이름을 입력하세요");
	gets_s(str1);
	
	sprintf_s(str2, "%s씨 안녕하세요", str1);
	puts(str2);

	return 0;
}
<test>
