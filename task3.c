int factorial(int num)
{
	int res = 1;

	for (int i = 1; i <= num; ++i)
	{
		res *= i;
	}

	return res;
}