#include <stdio.h>
//#include <string.h>
//char    *ft_strncpy_rec(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main () {
   char src[40];
   char dest[100];
  
   ft_strncpy(src, "Ipsum lorem decorem,twenty chars beforem",50);
   ft_strncpy(dest, src,40);
   printf("Final copied string : %s\n", dest);
   
   return(0);
}
