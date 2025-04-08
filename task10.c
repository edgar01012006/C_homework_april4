int fib(int num)
{
	if (num <= 1)
	{
		return num;
	}

	int fib_1 = 0;
	int fib_2 = 1;
	int fib_n = fib_1 + fib_2;
	int swap = 0;

	for (int i = 2; i < num; ++i)
	{
		swap = fib_n;
		fib_1 = fib_2;
		fib_2 = swap;
		fib_n = fib_1 + fib_2;
	}

	return fib_n;
}