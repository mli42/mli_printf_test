/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 16:13:17 by mli               #+#    #+#             */
/*   Updated: 2021/03/25 12:33:35 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <stdlib.h>
int	ft_printf(const char *str, ...);

#ifndef FT_PRINTF
# define FT_PRINTF ft_printf
#endif

void	ft_test(const int line, const int ret)
{
	static int i = 0;

	FT_PRINTF("[%d][line: %d] || Returned: %d ||\n\n", i++, line, ret);
}

int		main(void)
{
// #################################### %c #####################################
	FT_PRINTF("\t\t||\tTESTS FOR %%C\t||\n");
	ft_test(__LINE__, FT_PRINTF("%c\n", 'r'));
	ft_test(__LINE__, FT_PRINTF("%c\n", -142));
	ft_test(__LINE__, FT_PRINTF("%20c\n", -142));
	ft_test(__LINE__, FT_PRINTF("%-20c\n", -142));
	ft_test(__LINE__, FT_PRINTF("Just printing an r : %c\n", 'r'));
	ft_test(__LINE__, FT_PRINTF("Just printing ok : %c and %c !\n", 'o', 'k'));

// #################################### %s #####################################
	FT_PRINTF("\t\t||\tTESTS FOR %%S\t||\n");
	char r[] = {'1', '2', '3', '4', '5', '\0'};
	char r2[] = {'1', '2', '3', '4', '5'};
	ft_test(__LINE__, FT_PRINTF("%s\n", r));
	ft_test(__LINE__, FT_PRINTF("%.s\n", r));
	ft_test(__LINE__, FT_PRINTF("%.0s\n", r));
	ft_test(__LINE__, FT_PRINTF("%.3s\n", r));
	ft_test(__LINE__, FT_PRINTF("%.3s\n", r2));
	ft_test(__LINE__, FT_PRINTF("%.30s\n", r));
	ft_test(__LINE__, FT_PRINTF("%30.3s\n", r));
	ft_test(__LINE__, FT_PRINTF("%30.s\n", r));
	ft_test(__LINE__, FT_PRINTF("%-30.s\n", r));
	ft_test(__LINE__, FT_PRINTF("%-30s\n", r));
	ft_test(__LINE__, FT_PRINTF("%s %-30.3s %s\n", r, NULL, NULL));

// ################################## %xX && * #################################
	FT_PRINTF("\t\t||\tTESTS FOR %%xX and Parsing with *\t||\n");
	ft_test(__LINE__, FT_PRINTF("%20.15X\n", 2147483647));
	ft_test(__LINE__, FT_PRINTF("%-20.15X\n", 2147483647));
	ft_test(__LINE__, FT_PRINTF("%020.15X\n", 2147483647));
	ft_test(__LINE__, FT_PRINTF("%-*.*X\n", -20, -15, 2147483647));
	ft_test(__LINE__, FT_PRINTF("%*.*X\n", 20, -15, 2147483647));
	ft_test(__LINE__, FT_PRINTF("%*.*X\n", -20, -15, 2147483647));
	ft_test(__LINE__, FT_PRINTF("%0*.*X\n", -20, -15, 2147483647));
	ft_test(__LINE__, FT_PRINTF("%*.*X\n", -20, 15, -2147483647));
	ft_test(__LINE__, FT_PRINTF("%*.*X\n", -20, 15, -1));

	// Parsing
	ft_test(__LINE__, FT_PRINTF("%*.*X\n", -20, 15, -123456));
	ft_test(__LINE__, FT_PRINTF("%.*X\n", 15, -123456));
	ft_test(__LINE__, FT_PRINTF("%*X\n", -20, -123456));
	ft_test(__LINE__, FT_PRINTF("\t%*X\n", 20, -123456));
	ft_test(__LINE__, FT_PRINTF("\t%X\n", -123456));
	ft_test(__LINE__, FT_PRINTF("\t%x\n", -123456));
	ft_test(__LINE__, FT_PRINTF("\t%x\n", 123456));
	ft_test(__LINE__, FT_PRINTF("\t%x\n", 0));
	ft_test(__LINE__, FT_PRINTF("\t%.3x\n", 123456));
	ft_test(__LINE__, FT_PRINTF("\t%3x\n", 123456));
	ft_test(__LINE__, FT_PRINTF("\t%020.15x\n", -2147483647 - 1));

	// When 0
	ft_test(__LINE__, FT_PRINTF("\t%.x\n", 0));
	ft_test(__LINE__, FT_PRINTF("\t%20.x\n", 0));
	ft_test(__LINE__, FT_PRINTF("\t%020x\n", 0));
	ft_test(__LINE__, FT_PRINTF("\t%-20x\n", 0));
	ft_test(__LINE__, FT_PRINTF("\t%20x\n", 0));

// #################################### %p #####################################
	FT_PRINTF("\t\t||\tTESTS FOR %%p\t||\n");
	ft_test(__LINE__, FT_PRINTF("\tAddress %p\n", (void *)140732897249832));
	ft_test(__LINE__, FT_PRINTF("\tAddress %20p\n", (void *)140732856650280));
	ft_test(__LINE__, FT_PRINTF("\tAddress %-20p\n", (void *)140732656753192));

// ################################### %di #####################################
	// Basics
	FT_PRINTF("\t\t||\tTESTS FOR %%D & I + Parsing\t||\n");
	ft_test(__LINE__, FT_PRINTF("\t%d\n", 0));
	ft_test(__LINE__, FT_PRINTF("\t%d\n", 123456));
	ft_test(__LINE__, FT_PRINTF("\t%d\n", -123456));
	// Basics with %i
	ft_test(__LINE__, FT_PRINTF("\t%i\n", 0));
	ft_test(__LINE__, FT_PRINTF("\t%i\n", 123456));
	ft_test(__LINE__, FT_PRINTF("\t%i\n", -123456));

	// Comptage du -
	ft_test(__LINE__, FT_PRINTF("\t%d\n", -1));
	ft_test(__LINE__, FT_PRINTF("\t%1d\n", -1));
	ft_test(__LINE__, FT_PRINTF("\t%2d\n", -1));
	ft_test(__LINE__, FT_PRINTF("\t%3d\n", -1));
	ft_test(__LINE__, FT_PRINTF("\t%4d\n", -1));

	// Bon placement du -
	ft_test(__LINE__, FT_PRINTF("\t%020.15d\n", -1));
	ft_test(__LINE__, FT_PRINTF("\t%20.15d\n", -1));
	ft_test(__LINE__, FT_PRINTF("\t%-20.15d\n", -123));

	// Int max et min
	ft_test(__LINE__, FT_PRINTF("\t%d\n", 2147483647));
	ft_test(__LINE__, FT_PRINTF("\t%d\n", -2147483647 - 1));
	ft_test(__LINE__, FT_PRINTF("\t%020.15d\n", -2147483647 - 1));

	// When 0
	ft_test(__LINE__, FT_PRINTF("\t%.d\n", 0));
	ft_test(__LINE__, FT_PRINTF("\t%20.d\n", 0));
	ft_test(__LINE__, FT_PRINTF("\t%020d\n", 0));
	ft_test(__LINE__, FT_PRINTF("\t%-20d\n", 0));
	ft_test(__LINE__, FT_PRINTF("\t%20d\n", 0));

	// Parsing
	ft_test(__LINE__, FT_PRINTF("\t%00000000004d\n", -1));
	ft_test(__LINE__, FT_PRINTF("\t%----------4d\n", -1));
	ft_test(__LINE__, FT_PRINTF("\t%.0005d\n", 132));

// #################################### %u #####################################
	FT_PRINTF("\t\t||\tTESTS FOR %%U\t||\n");
	// Basics
	ft_test(__LINE__, FT_PRINTF("\t%u\n", 0));
	ft_test(__LINE__, FT_PRINTF("\t%u\n", 123456));
	ft_test(__LINE__, FT_PRINTF("\t%u\n", -123456));

	ft_test(__LINE__, FT_PRINTF("\t%020.15u\n", -1));
	ft_test(__LINE__, FT_PRINTF("\t%20.15u\n", -1));
	ft_test(__LINE__, FT_PRINTF("\t%-20.15u\n", -123));

	// Int max et min
	ft_test(__LINE__, FT_PRINTF("\t%u\n", 2147483647));
	ft_test(__LINE__, FT_PRINTF("\t%u\n", -2147483647 - 1));
	ft_test(__LINE__, FT_PRINTF("\t%020.15u\n", -2147483647 - 1));

	// When 0
	ft_test(__LINE__, FT_PRINTF("\t%.u\n", 0));
	ft_test(__LINE__, FT_PRINTF("\t%20.u\n", 0));
	ft_test(__LINE__, FT_PRINTF("\t%020u\n", 0));
	ft_test(__LINE__, FT_PRINTF("\t%-20u\n", 0));
	ft_test(__LINE__, FT_PRINTF("\t%20u\n", 0));

	// Unsigned
	ft_test(__LINE__, FT_PRINTF("\t%u\n", -20));
	ft_test(__LINE__, FT_PRINTF("\t%u\n", -2147483647 + 20));
	ft_test(__LINE__, FT_PRINTF("\t%u\n", -21447));

// #################################### %% #####################################
	FT_PRINTF("\t\t||\tTESTS FOR %%%%\t||\n");
	ft_test(__LINE__, FT_PRINTF("\t%.10%\n"));
	ft_test(__LINE__, FT_PRINTF("\t%10%\n"));
	ft_test(__LINE__, FT_PRINTF("\t%010%\n"));
	ft_test(__LINE__, FT_PRINTF("\t%-10%\n"));

// ################################# Undefined #################################
	//ft_test(__LINE__, FT_PRINTF("%.s\n", 42));
	//ft_test(__LINE__, FT_PRINTF("\t%00000-00004d\n", -1));

	//while (1);
	//system("leaks a.out");
	return (0);
}
