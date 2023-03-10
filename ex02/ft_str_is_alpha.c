#include <stdio.h>


int 	mp_if_upper(char *ch)
{
	printf("u");

	if (*ch >= 65 && *ch <= 90)
	{
		return (1);
	}
	return (0);
}

int 	mp_if_lower(char *ch)
{
	printf("l");
	if (*ch >= 97 && *ch <= 122)
	{
		return (1);
	}
	return (0);
}
int	mp_if_alpha(char ch)
{
	printf("a");
	return(0);
}

int	ft_str_is_alpha(char *str)
{
	int 	is_alpha;
	
	is_alpha = (mp_if_lower(str) || mp_if_upper(str));

	printf("%i ",is_alpha);

	//is_upper = mp_if_upper(*str);
	if (*str != '\0' &&( mp_if_lower(str) || mp_if_upper(str)))
	{
		printf("%c ",*str);
		str++;
		ft_str_is_alpha(str);

	
	}
	printf("b");
	return (0);
}

