int power(int num, int exp)
{
	int res = 1;

	for (int i = 1; i <= exp; ++i)
	{
		res *= num;
	}

	return res;
}