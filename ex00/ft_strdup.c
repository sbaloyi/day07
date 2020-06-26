#include <stdlib.h>

int ft_strlen(char *str) {
	
	int counter = 0;
	
	while (*str != '\0') {
		++counter;
		++str;
	}
	return counter;
}

char *strdup(char *src)
{
    int size;
    static char *copy;
    char *copy_o;

    size = ft_strlen(src);
    copy = (char *)malloc(sizeof(char)*size+1);
    if( copy == NULL)
        return( (char *)NULL);
    copy_o = copy;

    while(*src)
    {
        *copy_o = *src;
        copy_o++;
        src++;
    }
    *copy_o = '\0';

    return(copy);
}
