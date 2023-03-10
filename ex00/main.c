#include <stdio.h>
//#include <string.h>
char    *ft_strcpy(char *dest, char *src);
char    *ft_strcpy_rec(char *dest, char *src);

int main () {
   char src[40];
   char dest[100];
  
   //memset(dest, '\0', sizeof(dest));
  //char    *ft_strcpy(char *dest, char *src)
  // strcpy(dest, src);
  // ft_strcpy(src, "This is tutorialspoint.com");
  // ft_strcpy(dest, src);
   ft_strcpy_rec(src, "This is tutorialspoint.com");
   ft_strcpy_rec(dest, src);
   printf("Final copied string : %s\n", dest);
   
   return(0);
}
