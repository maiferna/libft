/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:44:57 by maiferna          #+#    #+#             */
/*   Updated: 2024/09/09 13:45:55 by maiferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
int	main(void)
{
	int	result;

	result = ft_isalpha('g');
	printf("%d", result);
	return (0);
}

int	main(void)
{
	char	str[] = "holakjdhsk";
	
	ft_memset(str, 'g', 2);
	printf("%s", str);
	return (0);
}

int	main(void)
{
	char	src[] = "abcdefghijkl";
	char	dest[8];

	ft_memmove(dest, src, 7);
	printf("%s", dest);
	return (0);
}

int	main(void)
{
	char	src[] = "que tal";
	char	dest[] = "hola";
	unsigned int	result;

	result = ft_strlcat(dest, src, 2);
	printf("%d, %s", result, dest);
	return (0);
}

int main(void)
{
    const char *str = "Holam, mundo!";
    char ch = 'm';
    char *result;

    result = ft_strrchr(str, ch);
    if (result)
        printf("Primera aparición del carácter '%c': %s\n", ch, result);
    else
        printf("El carácter '%c' no se encontró en la cadena.\n", ch);

    return 0;
}
int	main(void)
{
	char	str[] = "hola que tal";
	char	to_find[] = "que";
	char	*result;
	
	result = ft_strnstr(str, to_find, 8);
	printf("%s", result);
	return (0);
}
int main(void)
{
    char *str = "";
    int result;

    result = ft_atoi(str);
    printf("%d", result);
    return (0);
}

int	main(void)
{
	char	*str;
	
	str = ft_calloc(4, 5);
	printf("%s\n", str);
	
	for (int i = 0; i < 4 * 5; i++)
		printf("%d ", (unsigned char)str[i]);
	printf("\n");
	return (0);

}
int main(void)
{
    const char *str = "Hola Mundo";
    unsigned int start = 5;
    size_t len = 5;
    
    // Llamada a ft_substr
    char *substring = ft_substr(str, start, len);
    printf("%s", substring);
    return (0);
}
int	main(void)
{
	char	*str1 = "hola";
	char	*str2 = "que tal";
	char	*result;
	
	result = ft_strjoin(str1, str2);
	printf("%s", result);
	return (0);
}
int	main(void)
{
	char	*str1 = "babb cbholababbcc";
	char	*to_trim = "abc";
	char	*result;
	
	result = ft_strtrim(str1, to_trim);
	printf("%s", result);
	return (0);
}

int main(void)
{
    int num1 = 12345;
    int num2 = -56789;
    int num3 = 0;

    printf("Resultado de ft_itoa(%d): %s\n", num1, ft_itoa(num1));
    printf("Resultado de ft_itoa(%d): %s\n", num2, ft_itoa(num2));
    printf("Resultado de ft_itoa(%d): %s\n", num3, ft_itoa(num3));

    return 0;
}
int main(void)
{
    // Ejemplos de uso de ft_putnbr_fd
    int num1 = 42;
    int num2 = -2147483648;  // Caso extremo
    int num3 = 0;
    
    // Imprimir en la salida estándar (stdout)
    ft_putnbr_fd(num1, 1);
    write(1, "\n", 1);  // Salto de línea

    ft_putnbr_fd(num2, 1);
    write(1, "\n", 1);  // Salto de línea

    ft_putnbr_fd(num3, 1);
    write(1, "\n", 1);  // Salto de línea
    return  (0);
}*/
