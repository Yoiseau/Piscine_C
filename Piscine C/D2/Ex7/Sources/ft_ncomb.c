#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int number)
{
	if (number == INT_MIN)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr((INT_MIN + 2000000000) * (-1));
		return ;
	}
	else if (number & 0x80000000)
	{	
		ft_putchar('-');
		number *= -1;
	}
	if (number > 9)
	{
		ft_putnbr(number/10);
		ft_putchar(number%10 + '0');
	}
	else
		ft_putchar(number + '0');
}


void ft_print_ncomb()
{
	int i;
	int j;

	i = 0;
	j = i + 1;

	while (i <= 99)
	{
		while (j <= 99)
		{
			
			
			ft_putchar(i/10 + '0');
			ft_putchar(i%10 + '0');

			ft_putchar(' ');

			ft_putchar(j/10 + '0');
			ft_putchar(j%10 + '0');
			
			ft_putchar('\n');
			j++;
		}	
		i++;
		j = i + 1;	
				
	}
}



int main(int argc, char* argv[])
{
	ft_print_ncomb(2);
	return 0;
}

