int prime(int num);// task5 prime function

int sum_of_two_primes(int num)
{
	for (int i = 2; i < num; ++i)
	{
		if (prime(i) == 1)
		{
			for (int j = i; j < num; ++j)
			{
				if (prime(j) == 1)
				{
					if (i + j == num)
					{
						printf("%d + %d = %d\n\n", i, j, num);
						return 1;
					}
				}
			}
		}
	}
	printf("%d isn't possible to represent with the sum of 2 prime numbers\n\n", num);
	return 0;
}