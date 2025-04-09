#include <stdio.h>
#define SIZE 32 // for task9 and task11

void mul_table(int num);
void mul_table_1_10();
int factorial(int num);
int digits_sum(int num);
int prime(int num);
int sum_of_two_primes(int num);
int power(int num, int exp);
int reverse_num(int num);
void dec_to_hex(double dec, char* arr);
int fib(int num);
void dec_to_bin(int num, char* arr);

int main()
{
	int num = 0;
	printf("enter a number\n");
	scanf("%d", &num);

	printf("\ntask1\n");
	mul_table(num);

	printf("task2\n");
	mul_table_1_10();

	printf("task3\n");
	printf("%d! = %d\n\n", num, factorial(num));

	printf("task4\n");
	printf("digits_sum = %d\n\n", digits_sum(num));

	printf("task5\n");
	if (prime(num) == 1)
	{
		printf("%d is prime\n\n", num);
	}
	else
	{
		printf("%d is not prime\n\n", num);
	}

	printf("task6\n");
	sum_of_two_primes(num);

	printf("task7\n");
	int exp = 0;
	printf("enter an exponent\n");
	scanf("%d", &exp);
	printf("%d ^ %d = %d\n\n", num, exp, power(num, exp));

	printf("task8\n");
	printf("%d reverse = %d\n\n", num, reverse_num(num));
	
	printf("task9\n");
	double dec1 = 0;
	printf("enter a number\n");
	scanf("%lf", &dec1);
	char arr1[SIZE] = { '\0' };
	dec_to_hex(dec1, arr1);
	for (int i = SIZE - 1; i >= 0; --i)
	{
		if (arr1[i] != '\0')
		{
			printf("%c", arr1[i]);
		}
	}
	printf("\n\n");

	printf("task10\n");
	printf("%d fibonacci = %d\n\n", num, fib(num));

	printf("task11\n");
	int dec2 = 0;
	printf("enter a number\n");
	scanf("%d", &dec2);
	char arr2[SIZE] = { '\0' };
	dec_to_bin(dec2, arr2);
	for (int i = 0; i < SIZE; ++i)
	{
		printf("%c", arr2[i]);
	}

	return 0;
}