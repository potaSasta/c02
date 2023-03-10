#include <stdio.h>


char    *ft_strcpy_rec(char *dest, char *src)
{
	if (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		ft_strcpy_rec(dest, src);
	
	}

	else
	{
		*dest = '\0';
		return ("0");

	}
}


char	*ft_strcpy(char *dest, char *src)
{
	char* res;
	
	res = dest;

	ft_strcpy_rec(dest, src);
	return res;
}
