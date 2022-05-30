
#include <unistd.h>

void	ft_putstr(char *str)

{
	int		x;
	char	c;

	x = 0;
	while (*(str + x) != '\0')
	{
		c = *(str + x);
		write(1, &c, 1);
		x++;
	}
}
/*int main()
{
	ft_putstr("abc");
}*/
