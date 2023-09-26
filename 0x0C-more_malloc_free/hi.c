int sti(char *str)
{
	int x, r;

	x = r = 0;
	while (str[x])
	{
		if (str[x] >= '0' && str[x] <= '9')
		{
			r *= 10;
			r += (str[x] - '0');
		}
		x++;
	}
	return (r);
}
