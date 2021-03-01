/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 16:13:17 by mli               #+#    #+#             */
/*   Updated: 2021/03/01 14:04:25 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
int				ft_printf(const char *str, ...);

#ifndef FT_PRINTF
# define FT_PRINTF ft_printf
#endif

void	ft_test(int ret)
{
	static int i = 0;

	FT_PRINTF("[%d] || Returned: %d ||\n\n", i++, ret);
}

int		main(void)
{
	//				%c				//
	ft_printf("\t\t||\tTESTS FOR %%C\t||\n");
	ft_test(FT_PRINTF("%c\n", 'r'));
	ft_test(FT_PRINTF("%c\n", -142));
	ft_test(FT_PRINTF("%20c\n", -142));
	ft_test(FT_PRINTF("%-20c\n", -142));
	ft_test(FT_PRINTF("Just printing an r : %c\n", 'r'));
	ft_test(FT_PRINTF("Just printing ok : %c and %c !\n", 'o', 'k'));
	//				%s				//
	FT_PRINTF("\t\t||\tTESTS FOR %%S\t||\n");
	char r[] = {'1', '2', '3', '4', '5', '\0'};
	char r2[] = {'1', '2', '3', '4', '5'};
	ft_test(FT_PRINTF("%s\n", r));
	ft_test(FT_PRINTF("%.s\n", r));
	//ft_test(FT_PRINTF("%.s\n", 42));
	ft_test(FT_PRINTF("%.0s\n", r));
	ft_test(FT_PRINTF("%.3s\n", r));
	ft_test(FT_PRINTF("%.3s\n", r2));
	ft_test(FT_PRINTF("%.30s\n", r));
	ft_test(FT_PRINTF("%30.3s\n", r));
	ft_test(FT_PRINTF("%30.s\n", r));
	ft_test(FT_PRINTF("%-30.s\n", r));
	ft_test(FT_PRINTF("%-30s\n", r));
	ft_test(FT_PRINTF("%s %-30.3s %s\n", r, NULL, NULL));

	//			%xX	&& *		//
	FT_PRINTF("\t\t||\tTESTS FOR %%xX and Parsing with *\t||\n");
	ft_test(FT_PRINTF("%20.15X\n", 2147483647));
	ft_test(FT_PRINTF("%-20.15X\n", 2147483647));
	ft_test(FT_PRINTF("%020.15X\n", 2147483647));
	ft_test(FT_PRINTF("%-*.*X\n", -20, -15, 2147483647));
	ft_test(FT_PRINTF("%*.*X\n", 20, -15, 2147483647));
	ft_test(FT_PRINTF("%*.*X\n", -20, -15, 2147483647));
	ft_test(FT_PRINTF("%0*.*X\n", -20, -15, 2147483647));
	ft_test(FT_PRINTF("%*.*X\n", -20, 15, -2147483647));
	ft_test(FT_PRINTF("%*.*X\n", -20, 15, -1));

	// Parsing
	ft_test(FT_PRINTF("%*.*X\n", -20, 15, -123456));
	ft_test(FT_PRINTF("%.*X\n", 15, -123456));
	ft_test(FT_PRINTF("%*X\n", -20, -123456));
	ft_test(FT_PRINTF("31\t%*X\n", 20, -123456));
	ft_test(FT_PRINTF("32\t%X\n", -123456));
	ft_test(FT_PRINTF("33\t%x\n", -123456));
	ft_test(FT_PRINTF("34\t%x\n", 123456));
	ft_test(FT_PRINTF("35\t%x\n", 0));
	ft_test(FT_PRINTF("36\t%.3x\n", 123456));
	ft_test(FT_PRINTF("37\t%3x\n", 123456));
	ft_test(FT_PRINTF("38\t%020.15x\n", -2147483647 - 1));

	// When 0
	ft_test(FT_PRINTF("39\t%.x\n", 0));
	ft_test(FT_PRINTF("40\t%20.x\n", 0));
	ft_test(FT_PRINTF("41\t%020x\n", 0));
	ft_test(FT_PRINTF("42\t%-20x\n", 0));
	ft_test(FT_PRINTF("43\t%20x\n", 0));

	//				%p	 		//
	FT_PRINTF("\t\t||\tTESTS FOR %%P\t||\n");
	ft_test(FT_PRINTF("44\tAddress %p\n", 140732897249832));
	ft_test(FT_PRINTF("45\tAddress %20p\n", 140732856650280));
	ft_test(FT_PRINTF("46\tAddress %-20p\n", 140732656753192));

	//			%di				//
	// Basics
	FT_PRINTF("\t\t||\tTESTS FOR %%D & I + Parsing\t||\n");
	ft_test(FT_PRINTF("47\t%d\n", 0));
	ft_test(FT_PRINTF("48\t%d\n", 123456));
	ft_test(FT_PRINTF("49\t%d\n", -123456));
	// Basics with %i
	ft_test(FT_PRINTF("50\t%i\n", 0));
	ft_test(FT_PRINTF("51\t%i\n", 123456));
	ft_test(FT_PRINTF("52\t%i\n", -123456));

	// Comptage du -
	ft_test(FT_PRINTF("53\t%d\n", -1));
	ft_test(FT_PRINTF("54\t%1d\n", -1));
	ft_test(FT_PRINTF("55\t%2d\n", -1));
	ft_test(FT_PRINTF("56\t%3d\n", -1));
	ft_test(FT_PRINTF("57\t%4d\n", -1));

	// Bon placement du -
	ft_test(FT_PRINTF("58\t%020.15d\n", -1));
	ft_test(FT_PRINTF("59\t%20.15d\n", -1));
	ft_test(FT_PRINTF("60\t%-20.15d\n", -123));

	// Int max et min
	ft_test(FT_PRINTF("61\t%d\n", 2147483647));
	ft_test(FT_PRINTF("62\t%d\n", -2147483647 - 1));
	ft_test(FT_PRINTF("63\t%020.15d\n", -2147483647 - 1));

	// When 0
	ft_test(FT_PRINTF("64\t%.d\n", 0));
	ft_test(FT_PRINTF("65\t%20.d\n", 0));
	ft_test(FT_PRINTF("66\t%020d\n", 0));
	ft_test(FT_PRINTF("67\t%-20d\n", 0));
	ft_test(FT_PRINTF("67\t%20d\n", 0));

	// Parsing
	ft_test(FT_PRINTF("68\t%00000000004d\n", -1));
	ft_test(FT_PRINTF("69\t%00000-00004d\n", -1));
	ft_test(FT_PRINTF("70\t%----------4d\n", -1));
	ft_test(FT_PRINTF("71\t%.0005d\n", 132));

	//			%u				//
	FT_PRINTF("\t\t||\tTESTS FOR %%U\t||\n");
	// Basics
	ft_test(FT_PRINTF("72\t%u\n", 0));
	ft_test(FT_PRINTF("73\t%u\n", 123456));
	ft_test(FT_PRINTF("74\t%u\n", -123456));

	ft_test(FT_PRINTF("75\t%020.15u\n", -1));
	ft_test(FT_PRINTF("76\t%20.15u\n", -1));
	ft_test(FT_PRINTF("77\t%-20.15u\n", -123));

	// Int max et min
	ft_test(FT_PRINTF("78\t%u\n", 2147483647));
	ft_test(FT_PRINTF("79\t%u\n", -2147483647 - 1));
	ft_test(FT_PRINTF("80\t%020.15u\n", -2147483647 - 1));

	// When 0
	ft_test(FT_PRINTF("81\t%.u\n", 0));
	ft_test(FT_PRINTF("82\t%20.u\n", 0));
	ft_test(FT_PRINTF("83\t%020u\n", 0));
	ft_test(FT_PRINTF("84\t%-20u\n", 0));
	ft_test(FT_PRINTF("85\t%20u\n", 0));

	// Unsigned
	ft_test(FT_PRINTF("86\t%u\n", -20));
	ft_test(FT_PRINTF("87\t%u\n", -2147483647 + 20));
	ft_test(FT_PRINTF("88\t%u\n", -21447));

	//			%%				//
	FT_PRINTF("\t\t||\tTESTS FOR %%%%\t||\n");
	ft_test(FT_PRINTF("89\t%.10%\n"));
	ft_test(FT_PRINTF("90\t%10%\n"));
	ft_test(FT_PRINTF("91\t%010%\n"));
	ft_test(FT_PRINTF("92\t%-10%\n"));

//	while (1);
	return (0);
}
