#include <stdio.h>

int mp_ch_is_print(char *ch)
{
         if (*ch >= 32 && *ch <= 127)
        {
                return (1);
        }
        //printf("a");
        return(0);

}
int ft_str_is_printable(char *str)
{
	int     is_print;

        is_print = mp_ch_is_print(str);

        //printf("%i ",is_print);

        //is_upper = mp_if_upper(*str);
        if (*str != '\0' && is_print)
        {
                printf("%c ",*str);
                str++;
		is_print = ft_str_is_printable(str);


        }

        return (is_print);

}
