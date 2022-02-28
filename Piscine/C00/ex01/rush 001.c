#include <unistd.h>

void	rush(int a, int b)
{
	int	x;
	int	y;

	y = 0;
	x = 0;
	while (x++ <= b)
	{
		while (y++ <= a)
		{
			if (x == 1 || x == b)
			{
				if (y == 1 || y == a)
					write(1, "o", 1);
				else
					write(1, "-", 1);
			}
			else if (y == 1 || y == a)
				write(1, "|", 1);
			else
				write(1, " ", 1);
		}
		y = 1;
		write(1, "\n", 1);
	}
int main (void)
{
    rush(34,23);
    return (0);
}