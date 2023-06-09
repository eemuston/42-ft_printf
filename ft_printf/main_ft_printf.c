/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:05:03 by eemuston          #+#    #+#             */
/*   Updated: 2023/01/12 17:05:07 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
//#include "libft/libft.h"

//int ft_printf(const char *, ...);

int main(void)
{
	int temp;
	int temp2;
	char *whoops_a_daisy = "oh look -> %";
	char *slash = "oh look -> \\";

	printf("%c", '\n');

	temp =     printf("%% as a last char.\n");
	temp2 = ft_printf("%% as a last char.\n");
	printf("temp = %d, temp2 = %d\n", temp, temp2);
	printf("%c", '\n');
	temp =     printf(whoops_a_daisy, "uh-oh");
	printf("%c", '\n');
	temp2 = ft_printf(whoops_a_daisy, "uh-oh");
	printf("%c", '\n');
	printf("temp = %d, temp2 = %d\n", temp, temp2);
	printf("%c", '\n');
	temp =     printf("%s", whoops_a_daisy);
	printf("%c", '\n');
	temp2 = ft_printf("%s", whoops_a_daisy);
	printf("%c", '\n');
	printf("temp = %d, temp2 = %d\n", temp, temp2);
	printf("%c", '\n');

	temp =     printf("\\ as a last char.\n");
	temp2 = ft_printf("\\ as a last char.\n");
	printf("temp = %d, temp2 = %d\n", temp, temp2);
	printf("%c", '\n');
	temp =     printf(slash, "huh");
	printf("%c", '\n');
	temp2 = ft_printf(slash, "huh");
	printf("%c", '\n');
	printf("temp = %d, temp2 = %d\n", temp, temp2);
	printf("%c", '\n');
	temp =     printf("%s", slash);
	printf("%c", '\n');
	temp2 = ft_printf("%s", slash);
	printf("%c", '\n');
	printf("temp = %d, temp2 = %d\n", temp, temp2);
	printf("%c", '\n');

	printf("Print %% character.\n");
	temp =     printf("Hello %%\n");
	temp2 = ft_printf("Hello %%\n");
	printf("temp = %d, temp2 = %d\n", temp, temp2);
	printf("%c", '\n');

	printf("Print world string.\n");
	temp =     printf("Hello %s!\n", "world");
	temp2 = ft_printf("Hello %s!\n", "world");
	printf("temp = %d, temp2 = %d\n", temp, temp2);
	printf("%c", '\n');

	printf("Print \" NULL %%s NULL \"string.\n");
	temp =     printf(" NULL %s NULL ", (void *) 0);
	printf("%c", '\n');
	temp2 = ft_printf(" NULL %s NULL ", (void *) 0);
	 printf("%c", '\n');
	printf("temp = %d, temp2 = %d\n", temp, temp2);
	printf("%c", '\n');

	printf("Print Q char.\n");
	temp =     printf("Hello %c!\n", 'Q');
	temp2 = ft_printf("Hello %c!\n", 'Q');
	printf("temp = %d, temp2 = %d\n", temp, temp2);
	printf("%c", '\n');

	printf("Print int 5 char.\n");
	temp =     printf("Hello %d!\n", 5);
	temp2 = ft_printf("Hello %d!\n", 5);
	printf("temp = %d, temp2 = %d\n", temp, temp2);
	printf("%c", '\n');

	printf("Print int 6 char.\n");
	temp =     printf("Hello %i!\n", 6);
	temp2 = ft_printf("Hello %i!\n", 6);
	printf("temp = %d, temp2 = %d\n", temp, temp2);
	printf("%c", '\n');

	printf("Print ints as hex.\n");
	printf("0, 10, 15, 16, 32, 67, 255, 123456789\n");
	temp =     printf("Hello %x %x %x %x %x %x %x %x %x !\n", 0, 10, 15, 16, 32, 67, 255, 123456789, 94967295);
	temp2 = ft_printf("Hello %x %x %x %x %x %x %x %x %x !\n", 0, 10, 15, 16, 32, 67, 255, 123456789, 94967295);
	printf("temp = %d, temp2 = %d\n", temp, temp2);
	printf("%c", '\n');

	printf("Print ints as hex.\n");
	printf("0, 10, 15, 16, 32, 67, 255, 123456789\n");
	temp =     printf("Hello %x %x %x %x %x %x %x %x %x !\n", 0, 10, 15, 16, 32, 67, 255, 123456789, 94967295);
	temp2 = ft_printf("Hello %x %x %x %x %x %x %x %x %x !\n", 0, 10, 15, 16, 32, 67, 255, 123456789, 94967295);
	printf("temp = %d, temp2 = %d\n", temp, temp2);
	printf("%c", '\n');

	printf("Print ints as hex.\n");
	printf("0, 10, 15, 16, 32, 67, 255, 123456789\n");
	temp =     printf("Hello %x %x %x %x %x %x %x %x %x !\n", 0, 10, 15, 16, 32, 67, 255, 123456789, 94967295);
	temp2 = ft_printf("Hello %x %x %x %x %x %x %x %x %x !\n", 0, 10, 15, 16, 32, 67, 255, 123456789, 94967295);
	printf("temp = %d, temp2 = %d\n", temp, temp2);
	printf("%c", '\n');

	printf("Print ints as hex.\n");
	printf("0, 10, 15, 16, 32, 67, 255, 123456789\n");
	temp =     printf("Hello %x %x %x %x %x %x %x %x %x !\n", 0, 10, 15, 16, 32, 67, 255, 123456789, 94967295);
	temp2 = ft_printf("Hello %x %x %x %x %x %x %x %x %x !\n", 0, 10, 15, 16, 32, 67, 255, 123456789, 94967295);
	printf("temp = %d, temp2 = %d\n", temp, temp2);
	printf("%c", '\n');

	printf("printf -1\n");
	temp =     printf(" %x ", -1);
	printf("%c", '\n');
	temp2 = ft_printf(" %x ", -1);
	printf("%c", '\n');
	printf("temp = %d, temp2 = %d\n", temp, temp2);
	printf("%c", '\n');

	printf("Print ints as HEX.\n");
	printf("0, 10, 15, 16, 32, 67, 255, 123456789\n");
	temp =     printf("Hello %X %X %X %X %X %X %X %X!\n", 0, 10, 15, 16, 32, 67, 255, 123456789);
	temp2 = ft_printf("Hello %X %X %X %X %X %X %X %X!\n", 0, 10, 15, 16, 32, 67, 255, 123456789);
	//temp2 = ft_printf("Hello %i!\n", 6);
	printf("temp = %d, temp2 = %d\n", temp, temp2);
	printf("%c", '\n');

	printf("Print unsigned ints.\n");
	printf("0, 10, 15, 16, 32, 67, 255, 123456789\n");
	temp =     printf("Hello %u %u %u %u %u %u %u %u!\n", 0, 10, 15, 16, 32, 67, 255, 123456789);
	temp2 = ft_printf("Hello %u %u %u %u %u %u %u %u!\n", 0, 10, 15, 16, 32, 67, 255, 123456789);
	//temp2 = ft_printf("Hello %i!\n", 6);
	printf("temp = %d, temp2 = %d\n", temp, temp2);
	printf("%c", '\n');

	char test_char = 'A';
	char *test_pointer = &test_char;  
	printf("Print pointer value in hex.\n");
	temp =     printf("Hello %p!\n", test_pointer);
	temp2 = ft_printf("Hello %p!\n", test_pointer);
	printf("temp = %d, temp2 = %d\n", temp, temp2);
	printf("%c", '\n');

	return (0);

}
