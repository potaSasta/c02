char	*ft_strncpy_rec(char *dest, char *src, unsigned int n, int i)
{               
        if (*src != '\0' && i < n)
        {
                *dest = *src;
                dest++;
                src++;
		i++;
                ft_strncpy_rec(dest, src, n, i);

        }

        else
        {
                *dest = '\0';
                return ("\0");

        }
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
        char*	res;
	int 	i;
        
	i = 0;
        res = dest;

        ft_strncpy_rec(dest, src, n, i);
        
	
	return res;
}
