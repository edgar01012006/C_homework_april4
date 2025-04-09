int power(int num, int exp); // task7 power function

void dec_to_bin(int num, char* arr)
{
	int counter = 31;
	int two_mul = 1;

	while (counter >= 0)
	{
		if ((num & two_mul) != 0)
		{
			arr[counter] = '1';
		}
		else
		{
			arr[counter] = '0';
		}
		two_mul *= 2;
		--counter;
	}
}