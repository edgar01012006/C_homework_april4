void dec_to_hex(double num, char* arr)
{
	double remainder = num;
	int quotient = num;
	int counter = 0;


	while (num >= 1)
	{
		num /= 16;
		quotient = (int)num;
		remainder = num - quotient;
		remainder *= 16;


		if (remainder >= 10)
		{
			switch ((int)remainder)
			{
			case 10:
				arr[counter] = 'A';
				break;
			case 11:
				arr[counter] = 'B';
				break;
			case 12:
				arr[counter] = 'C';
				break;
			case 13:
				arr[counter] = 'D';
				break;
			case 14:
				arr[counter] = 'E';
				break;
			case 15:
				arr[counter] = 'F';
				break;
			default:
				break;
			}
		}
		else
		{
			arr[counter] = remainder + 48;
		}
		++counter;
	}
}
