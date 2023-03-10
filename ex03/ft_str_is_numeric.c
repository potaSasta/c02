#include <stdio.h>

int     mp_ch_is_num(char *ch)
{
	 if (*ch >= 48 && *ch <= 57)
        {
                return (1);
        }
        //printf("a");
        return(0);
}

int     ft_str_is_numeric(char *str)
{
        int     is_num;

        is_num = mp_ch_is_num(str);

        printf("%i ",is_num);

        //is_upper = mp_if_upper(*str);
        if (*str != '\0' && is_num)
        {
                printf("%c ",*str);
                str++;
                is_num = ft_str_is_numeric(str);

        
        }

        return (is_num);
}


