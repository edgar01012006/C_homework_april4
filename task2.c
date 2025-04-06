void mul_table_1_10()
{
	for (int i = 1; i <= 10; ++i)
	{
		for (int j = 1; j <= 10; ++j)
		{
			printf("%d * %d = %d ", i, j, i * j);
		}
		printf("\n");
	}
	printf("\n");
}