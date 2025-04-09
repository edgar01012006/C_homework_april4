int power(int num, int exp); // task7 power function

int reverse_num(int num)
{
	int num_copy = num;
	int res = 0;
	int digits_size = -1;

	while (num_copy != 0)
	{
		num_copy /= 10;
		++digits_size;
	}

	while (num != 0)
	{
		res += num % 10 * power(10, digits_size);
		num /= 10;
		--digits_size;
	}

	return res;
}