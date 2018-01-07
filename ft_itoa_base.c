
#include "includes/libft.h"

static char		*exception(long long n)
{
	char	*ptr;

    if (n == 0)
	{
		if (!(ptr = ft_strnew(1)))
			return (NULL);
		ptr = ft_strcpy(ptr, "0");
		return (ptr);
	}
	return (NULL);
}

static int		ft_filler(long long i, int j, int base)
{
	while (i >= 1)
	{
		i /= base;
		j++;
	}
	return (j);
}

char			*ft_itoa_base(long long n, int base)
{
	long long   i;
	int		j;
	char	*ptr;
	int		neg;
    char    converter[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    if ( base == 0)
        return (NULL);
	if ((ptr = exception(n)) != NULL)
		return (ptr);
	neg = n < 0 ? -1 : 0;
	neg == -1 ? n = n * -1 : n;
	j = ft_filler(n, 0, base);
	neg == -1 ? j++ : j;
	if (!(ptr = ft_strnew(j)))
		return (NULL);
	i = 0;
	j--;
	while (n >= 1)
	{
        ft_putnbrn(n % base);
		ptr[j--] = converter[(n % base)];
		n /= base;
	}
	neg == -1 ? ptr[j] = '-' : neg;
	return (ptr);
}