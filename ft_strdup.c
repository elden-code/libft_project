
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t		len;
	size_t		count;
	char		*str_allocted;

	len = 0;
	len = ft_strlen(s1);
	str_allocted = (char *)malloc(len + 1);
	if (str_allocted == NULL)
		return (NULL);
	count = 0;
	while (s1 && s1[count])
	{
		str_allocted[count] = s1[count];
		count++;
	}
	str_allocted[count] = '\0';
	return (str_allocted);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	char str[12] = "solayman";
	printf("Size of str: %zu bytes\n", sizeof(str));
	printf("Address of myString: %p\n", (void *)str);
	printf("output is : %s\n", ft_strdup(str));
	printf("Address of myString: %p\n", (void *)str);
	printf("Size of str: %zu bytes\n", sizeof(ft_strdup(str)));
	return 0;
}
*/
