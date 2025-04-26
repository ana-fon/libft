#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Helper function for ft_strmapi
char	ft_toupper_wrapper(unsigned int i, char c)
{
	(void)i;
	return (ft_toupper(c));
}

// Helper function for ft_striteri
void	ft_toupper_wrapper_striteri(unsigned int i, char *c)
{
	(void)i;
	*c = ft_toupper(*c);
}

void	test_ft_isalpha(void)
{
	printf("\n=== Testing ft_isalpha ===\n");
	printf("ft_isalpha('a'): %d\n", ft_isalpha('a'));
	printf("ft_isalpha('Z'): %d\n", ft_isalpha('Z'));
	printf("ft_isalpha('1'): %d\n", ft_isalpha('1'));
}

void	test_ft_isdigit(void)
{
	printf("\n=== Testing ft_isdigit ===\n");
	printf("ft_isdigit('1'): %d\n", ft_isdigit('1'));
	printf("ft_isdigit('9'): %d\n", ft_isdigit('9'));
	printf("ft_isdigit('a'): %d\n", ft_isdigit('a'));
}

void	test_ft_isalnum(void)
{
	printf("\n=== Testing ft_isalnum ===\n");
	printf("ft_isalnum('a'): %d\n", ft_isalnum('a'));
	printf("ft_isalnum('1'): %d\n", ft_isalnum('1'));
	printf("ft_isalnum('@'): %d\n", ft_isalnum('@'));
}

void	test_ft_isascii(void)
{
	printf("\n=== Testing ft_isascii ===\n");
	printf("ft_isascii('a'): %d\n", ft_isascii('a'));
	printf("ft_isascii(128): %d\n", ft_isascii(128));
	printf("ft_isascii(0): %d\n", ft_isascii(0));
}

void	test_ft_isprint(void)
{
	printf("\n=== Testing ft_isprint ===\n");
	printf("ft_isprint('a'): %d\n", ft_isprint('a'));
	printf("ft_isprint(31): %d\n", ft_isprint(31));
	printf("ft_isprint(' '): %d\n", ft_isprint(' '));
}

void	test_ft_strlen(void)
{
	printf("\n=== Testing ft_strlen ===\n");
	printf("ft_strlen(\"Hello\"): %zu\n", ft_strlen("Hello"));
	printf("ft_strlen(\"\"): %zu\n", ft_strlen(""));
}

void	test_ft_memset(void)
{
	printf("\n=== Testing ft_memset ===\n");
	char str[10] = "Hello";
	ft_memset(str, 'A', 3);
	printf("After ft_memset: %s\n", str);
}

void	test_ft_bzero(void)
{
	printf("\n=== Testing ft_bzero ===\n");
	char str[10] = "Hello";
	ft_bzero(str, 3);
	printf("After ft_bzero: %s\n", str);
}

void	test_ft_memcpy(void)
{
	printf("\n=== Testing ft_memcpy ===\n");
	char src[] = "Hello";
	char dest[10];
	ft_memcpy(dest, src, 5);
	dest[5] = '\0';
	printf("After ft_memcpy: %s\n", dest);
}

void	test_ft_memmove(void)
{
	printf("\n=== Testing ft_memmove ===\n");
	char str[] = "Hello";
	ft_memmove(str + 1, str, 4);
	printf("After ft_memmove: %s\n", str);
}

void	test_ft_strlcpy(void)
{
	printf("\n=== Testing ft_strlcpy ===\n");
	char src[] = "Hello";
	char dest[10];
	size_t len = ft_strlcpy(dest, src, sizeof(dest));
	printf("After ft_strlcpy: %s (length: %zu)\n", dest, len);
}

void	test_ft_strlcat(void)
{
	printf("\n=== Testing ft_strlcat ===\n");
	char dest[20] = "Hello";
	char src[] = " World";
	size_t len = ft_strlcat(dest, src, sizeof(dest));
	printf("After ft_strlcat: %s (length: %zu)\n", dest, len);
}

void	test_ft_toupper(void)
{
	printf("\n=== Testing ft_toupper ===\n");
	printf("ft_toupper('a'): %c\n", ft_toupper('a'));
	printf("ft_toupper('A'): %c\n", ft_toupper('A'));
}

void	test_ft_tolower(void)
{
	printf("\n=== Testing ft_tolower ===\n");
	printf("ft_tolower('A'): %c\n", ft_tolower('A'));
	printf("ft_tolower('a'): %c\n", ft_tolower('a'));
}

void	test_ft_strchr(void)
{
	printf("\n=== Testing ft_strchr ===\n");
	char str[] = "Hello";
	printf("ft_strchr(\"Hello\", 'l'): %s\n", ft_strchr(str, 'l'));
	printf("ft_strchr(\"Hello\", 'x'): %s\n", ft_strchr(str, 'x'));
}

void	test_ft_strrchr(void)
{
	printf("\n=== Testing ft_strrchr ===\n");
	char str[] = "Hello";
	printf("ft_strrchr(\"Hello\", 'l'): %s\n", ft_strrchr(str, 'l'));
	printf("ft_strrchr(\"Hello\", 'x'): %s\n", ft_strrchr(str, 'x'));
}

void	test_ft_strncmp(void)
{
	printf("\n=== Testing ft_strncmp ===\n");
	printf("ft_strncmp(\"Hello\", \"Hello\", 5): %d\n", ft_strncmp("Hello", "Hello", 5));
	printf("ft_strncmp(\"Hello\", \"World\", 5): %d\n", ft_strncmp("Hello", "World", 5));
}

void	test_ft_memchr(void)
{
	printf("\n=== Testing ft_memchr ===\n");
	char str[] = "Hello";
	printf("ft_memchr(\"Hello\", 'l', 5): %s\n", (char *)ft_memchr(str, 'l', 5));
	printf("ft_memchr(\"Hello\", 'x', 5): %s\n", (char *)ft_memchr(str, 'x', 5));
}

void	test_ft_memcmp(void)
{
	printf("\n=== Testing ft_memcmp ===\n");
	printf("ft_memcmp(\"Hello\", \"Hello\", 5): %d\n", ft_memcmp("Hello", "Hello", 5));
	printf("ft_memcmp(\"Hello\", \"World\", 5): %d\n", ft_memcmp("Hello", "World", 5));
}

void	test_ft_strnstr(void)
{
	printf("\n=== Testing ft_strnstr ===\n");
	char str[] = "Hello World";
	printf("ft_strnstr(\"Hello World\", \"World\", 11): %s\n", ft_strnstr(str, "World", 11));
	printf("ft_strnstr(\"Hello World\", \"xyz\", 11): %s\n", ft_strnstr(str, "xyz", 11));
}

void	test_ft_atoi(void)
{
	printf("\n=== Testing ft_atoi ===\n");
	printf("ft_atoi(\"123\"): %d\n", ft_atoi("123"));
	printf("ft_atoi(\"-123\"): %d\n", ft_atoi("-123"));
	printf("ft_atoi(\"  +123\"): %d\n", ft_atoi("  +123"));
}

void	test_ft_calloc(void)
{
	printf("\n=== Testing ft_calloc ===\n");
	int *arr = (int *)ft_calloc(5, sizeof(int));
	if (arr)
	{
		printf("ft_calloc successful\n");
		free(arr);
	}
}

void	test_ft_strdup(void)
{
	printf("\n=== Testing ft_strdup ===\n");
	char *dup = ft_strdup("Hello");
	if (dup)
	{
		printf("ft_strdup: %s\n", dup);
		free(dup);
	}
}

void	test_ft_substr(void)
{
	printf("\n=== Testing ft_substr ===\n");
	char *sub = ft_substr("Hello World", 6, 5);
	if (sub)
	{
		printf("ft_substr: %s\n", sub);
		free(sub);
	}
}

void	test_ft_strjoin(void)
{
	printf("\n=== Testing ft_strjoin ===\n");
	char *join = ft_strjoin("Hello ", "World");
	if (join)
	{
		printf("ft_strjoin: %s\n", join);
		free(join);
	}
}

void	test_ft_strtrim(void)
{
	printf("\n=== Testing ft_strtrim ===\n");
	char *trim = ft_strtrim("  Hello World  ", " ");
	if (trim)
	{
		printf("ft_strtrim: %s\n", trim);
		free(trim);
	}
}

void	test_ft_split(void)
{
	printf("\n=== Testing ft_split ===\n");
	char **split = ft_split("Hello World", ' ');
	if (split)
	{
		printf("ft_split[0]: %s\n", split[0]);
		printf("ft_split[1]: %s\n", split[1]);
		free(split[0]);
		free(split[1]);
		free(split);
	}
}

void	test_ft_itoa(void)
{
	printf("\n=== Testing ft_itoa ===\n");
	char *str = ft_itoa(123);
	if (str)
	{
		printf("ft_itoa: %s\n", str);
		free(str);
	}
}

void	test_ft_strmapi(void)
{
	printf("\n=== Testing ft_strmapi ===\n");
	char *str = ft_strmapi("Hello", ft_toupper_wrapper);
	if (str)
	{
		printf("ft_strmapi: %s\n", str);
		free(str);
	}
}

void	test_ft_striteri(void)
{
	printf("\n=== Testing ft_striteri ===\n");
	char str[] = "Hello";
	ft_striteri(str, ft_toupper_wrapper_striteri);
	printf("After ft_striteri: %s\n", str);
}

void	test_ft_putchar_fd(void)
{
	printf("\n=== Testing ft_putchar_fd ===\n");
	ft_putchar_fd('A', 1);
	printf("\n");
}

void	test_ft_putstr_fd(void)
{
	printf("\n=== Testing ft_putstr_fd ===\n");
	ft_putstr_fd("Hello", 1);
	printf("\n");
}

void	test_ft_putendl_fd(void)
{
	printf("\n=== Testing ft_putendl_fd ===\n");
	ft_putendl_fd("Hello", 1);
}

void	test_ft_putnbr_fd(void)
{
	printf("\n=== Testing ft_putnbr_fd ===\n");
	ft_putnbr_fd(123, 1);
	printf("\n");
}

void	test_linked_list(void)
{
	printf("\n=== Testing Linked List Functions ===\n");
	
	// Create and allocate memory for the first node's content
	char *content1 = ft_strdup("Hello");
	t_list *lst = ft_lstnew(content1);
	
	// Create and allocate memory for the second node's content
	char *content2 = ft_strdup("World");
	ft_lstadd_front(&lst, ft_lstnew(content2));
	
	printf("List size: %d\n", ft_lstsize(lst));
	printf("First element: %s\n", (char *)lst->content);
	printf("Last element: %s\n", (char *)ft_lstlast(lst)->content);
	
	// Clear the list and free all allocated memory
	ft_lstclear(&lst, free);
}

int	main(void)
{
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_strlen();
	test_ft_memset();
	test_ft_bzero();
	test_ft_memcpy();
	test_ft_memmove();
	test_ft_strlcpy();
	test_ft_strlcat();
	test_ft_toupper();
	test_ft_tolower();
	test_ft_strchr();
	test_ft_strrchr();
	test_ft_strncmp();
	test_ft_memchr();
	test_ft_memcmp();
	test_ft_strnstr();
	test_ft_atoi();
	test_ft_calloc();
	test_ft_strdup();
	test_ft_substr();
	test_ft_strjoin();
	test_ft_strtrim();
	test_ft_split();
	test_ft_itoa();
	test_ft_strmapi();
	test_ft_striteri();
	test_ft_putchar_fd();
	test_ft_putstr_fd();
	test_ft_putendl_fd();
	test_ft_putnbr_fd();
	test_linked_list();
	return (0);
} 