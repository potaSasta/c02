#include <stdio.h>

int     mp_is_upper(char *ch)
{
        //printf("u");

        if (*ch >= 65 && *ch <= 90)
        {
                return (1);
        }
        return (0);
}

int     mp_ch_is_lower(char *ch)
{
        //printf("l");
        if (*ch >= 97 && *ch <= 122)
        {
                return (1);
        }
        return (0);
}

int 	mp_ch_is_print(char *ch)
{
         if (*ch >= 32 && *ch <= 127)
        {
                return (1);
        }
        //printf("a");
        return(0);

}
void     mp_strupcase_rec(char *str)
{

	int     is_lower;
	char	ch_new;
        is_lower = mp_ch_is_lower(str);
	printf("%c ",*str);

	
        if (*str != '\0' && is_lower)
        {
		ch_new = *str +32; 
                printf("%c ",ch_new);
		//*str = &ch_new;
		str++;
                mp_strupcase_rec(str);
	}
	else if (*str != '\0')
	{
		str++;
		mp_strupcase_rec(str);

	}	
}


char 	*ft_strupcase(char *str)
{
	char *str_pntr;

	*str_pntr = *str;
        //printf("%i ",is_print);

        //is_upper = mp_if_upper(*str);
	mp_strupcase_rec(str);

        

        return str_pntr;

}
