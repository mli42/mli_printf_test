/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 16:13:17 by mli               #+#    #+#             */
/*   Updated: 2020/02/18 13:40:23 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
int				ft_printf(const char *str, ...);

int		main(void)
{
	//				%c				//
	ft_printf("\t\t||\tTESTS FOR %%C\t||\n");
	ft_printf("||Returned: %d ||\n\n", ft_printf("1\t%c\n", 'r'));
	ft_printf("||Returned: %d ||\n\n", ft_printf("2\t%c\n", -142));
	ft_printf("||Returned: %d ||\n\n", ft_printf("3\t%20c\n", -142));
	ft_printf("||Returned: %d ||\n\n", ft_printf("4\t%-20c\n", -142));
	ft_printf("||Returned: %d ||\n\n", ft_printf("\n5\tJust printing an r : %c\n", 'r'));
	ft_printf("||Returned: %d ||\n\n", ft_printf("6\tJust printing ok : %c and %c !\n", 'o', 'k'));
	//				%s				//
	ft_printf("\t\t||\tTESTS FOR %%S\t||\n");
	char r[] = {'1', '2', '3', '4', '5', '\0'};
	char r2[] = {'1', '2', '3', '4', '5'};
	ft_printf("||Returned: %d ||\n\n", ft_printf("7\t%s\n", r));
	ft_printf("||Returned: %d ||\n\n", ft_printf("8\t%.s\n", r));
	ft_printf("||Returned: %d ||\n\n", ft_printf("9\t%.s\n", 42));
	ft_printf("||Returned: %d ||\n\n", ft_printf("10\t%.0s\n", r));
	ft_printf("||Returned: %d ||\n\n", ft_printf("11\t%.3s\n", r));
	ft_printf("||Returned: %d ||\n\n", ft_printf("12\t%.3s\n", r2));
	ft_printf("||Returned: %d ||\n\n", ft_printf("13\t%.30s\n", r));
	ft_printf("||Returned: %d ||\n\n", ft_printf("14\t%30.3s\n", r));
	ft_printf("||Returned: %d ||\n\n", ft_printf("15\t%30.s\n", r));
	ft_printf("||Returned: %d ||\n\n", ft_printf("16\t%-30.s\n", r));
	ft_printf("||Returned: %d ||\n\n", ft_printf("17\t%-30s\n", r));
	ft_printf("||Returned: %d ||\n\n", ft_printf("18\t%s %-30.3s %s\n", r, NULL, NULL));

	//			%xX	&& *		//
	ft_printf("\t\t||\tTESTS FOR %%xX and Parsing with *\t||\n");
	ft_printf("||Returned: %d ||\n\n", ft_printf("19\t%20.15X\n", 2147483647));
	ft_printf("||Returned: %d ||\n\n", ft_printf("20\t%-20.15X\n", 2147483647));
	ft_printf("||Returned: %d ||\n\n", ft_printf("21\t%020.15X\n", 2147483647));
	ft_printf("||Returned: %d ||\n\n", ft_printf("22\t%-*.*X\n", -20, -15, 2147483647));
	ft_printf("||Returned: %d ||\n\n", ft_printf("23\t%*.*X\n", 20, -15, 2147483647));
	ft_printf("||Returned: %d ||\n\n", ft_printf("24\t%*.*X\n", -20, -15, 2147483647));
	ft_printf("||Returned: %d ||\n\n", ft_printf("25\t%0*.*X\n", -20, -15, 2147483647));
	ft_printf("||Returned: %d ||\n\n", ft_printf("26\t%*.*X\n", -20, 15, -2147483647));
	ft_printf("||Returned: %d ||\n\n", ft_printf("27\t%*.*X\n", -20, 15, -1));

	// Parsing
	ft_printf("||Returned: %d ||\n\n", ft_printf("28\t%*.*X\n", -20, 15, -123456));
	ft_printf("||Returned: %d ||\n\n", ft_printf("29\t%.*X\n", 15, -123456));
	ft_printf("||Returned: %d ||\n\n", ft_printf("30\t%*X\n", -20, -123456));
	ft_printf("||Returned: %d ||\n\n", ft_printf("31\t%*X\n", 20, -123456));
	ft_printf("||Returned: %d ||\n\n", ft_printf("32\t%X\n", -123456));
	ft_printf("||Returned: %d ||\n\n", ft_printf("33\t%x\n", -123456));
	ft_printf("||Returned: %d ||\n\n", ft_printf("34\t%x\n", 123456));
	ft_printf("||Returned: %d ||\n\n", ft_printf("35\t%x\n", 0));
	ft_printf("||Returned: %d ||\n\n", ft_printf("36\t%.3x\n", 123456));
	ft_printf("||Returned: %d ||\n\n", ft_printf("37\t%3x\n", 123456));
	ft_printf("||Returned: %d ||\n\n", ft_printf("38\t%020.15x\n", -2147483647 - 1));

	// When 0
	ft_printf("||Returned: %d ||\n\n", ft_printf("39\t%.x\n", 0));
	ft_printf("||Returned: %d ||\n\n", ft_printf("40\t%20.x\n", 0));
	ft_printf("||Returned: %d ||\n\n", ft_printf("41\t%020x\n", 0));
	ft_printf("||Returned: %d ||\n\n", ft_printf("42\t%-20x\n", 0));
	ft_printf("||Returned: %d ||\n\n", ft_printf("43\t%20x\n", 0));

	//				%p	 		//
	ft_printf("\t\t||\tTESTS FOR %%P\t||\n");
	ft_printf("||Returned: %d ||\n\n", ft_printf("44\tAddress %p\n", 140732897249832));
	ft_printf("||Returned: %d ||\n\n", ft_printf("45\tAddress %20p\n", 140732856650280));
	ft_printf("||Returned: %d ||\n\n", ft_printf("46\tAddress %-20p\n", 140732656753192));

	//			%di				//
	// Basics
	ft_printf("\t\t||\tTESTS FOR %%D & I + Parsing\t||\n");
	ft_printf("||Returned: %d ||\n\n", ft_printf("47\t%d\n", 0));
	ft_printf("||Returned: %d ||\n\n", ft_printf("48\t%d\n", 123456));
	ft_printf("||Returned: %d ||\n\n", ft_printf("49\t%d\n", -123456));
	// Basics with %i
	ft_printf("||Returned: %i ||\n\n", ft_printf("50\t%i\n", 0));
	ft_printf("||Returned: %i ||\n\n", ft_printf("51\t%i\n", 123456));
	ft_printf("||Returned: %i ||\n\n", ft_printf("52\t%i\n", -123456));

	// Comptage du -
	ft_printf("||Returned: %d ||\n\n", ft_printf("53\t%d\n", -1));
	ft_printf("||Returned: %d ||\n\n", ft_printf("54\t%1d\n", -1));
	ft_printf("||Returned: %d ||\n\n", ft_printf("55\t%2d\n", -1));
	ft_printf("||Returned: %d ||\n\n", ft_printf("56\t%3d\n", -1));
	ft_printf("||Returned: %d ||\n\n", ft_printf("57\t%4d\n", -1));

	// Bon placement du -
	ft_printf("||Returned: %d ||\n\n", ft_printf("58\t%020.15d\n", -1));
	ft_printf("||Returned: %d ||\n\n", ft_printf("59\t%20.15d\n", -1));
	ft_printf("||Returned: %d ||\n\n", ft_printf("60\t%-20.15d\n", -123));

	// Int max et min
	ft_printf("||Returned: %d ||\n\n", ft_printf("61\t%d\n", 2147483647));
	ft_printf("||Returned: %d ||\n\n", ft_printf("62\t%d\n", -2147483647 - 1));
	ft_printf("||Returned: %d ||\n\n", ft_printf("63\t%020.15d\n", -2147483647 - 1));

	// When 0
	ft_printf("||Returned: %d ||\n\n", ft_printf("64\t%.d\n", 0));
	ft_printf("||Returned: %d ||\n\n", ft_printf("65\t%20.d\n", 0));
	ft_printf("||Returned: %d ||\n\n", ft_printf("66\t%020d\n", 0));
	ft_printf("||Returned: %d ||\n\n", ft_printf("67\t%-20d\n", 0));
	ft_printf("||Returned: %d ||\n\n", ft_printf("67\t%20d\n", 0));

	// Parsing
	ft_printf("||Returned: %d ||\n\n", ft_printf("68\t%00000000004d\n", -1));
	ft_printf("||Returned: %d ||\n\n", ft_printf("69\t%00000-00004d\n", -1));
	ft_printf("||Returned: %d ||\n\n", ft_printf("70\t%----------4d\n", -1));
	ft_printf("||Returned: %d ||\n\n", ft_printf("71\t%.0005d\n", 132));

	//			%u				//
	ft_printf("\t\t||\tTESTS FOR %%U\t||\n");
	// Basics
	ft_printf("||Returned: %d ||\n\n", ft_printf("72\t%u\n", 0));
	ft_printf("||Returned: %d ||\n\n", ft_printf("73\t%u\n", 123456));
	ft_printf("||Returned: %d ||\n\n", ft_printf("74\t%u\n", -123456));

	ft_printf("||Returned: %d ||\n\n", ft_printf("75\t%020.15u\n", -1));
	ft_printf("||Returned: %d ||\n\n", ft_printf("76\t%20.15u\n", -1));
	ft_printf("||Returned: %d ||\n\n", ft_printf("77\t%-20.15u\n", -123));

	// Int max et min
	ft_printf("||Returned: %d ||\n\n", ft_printf("78\t%u\n", 2147483647));
	ft_printf("||Returned: %d ||\n\n", ft_printf("79\t%u\n", -2147483647 - 1));
	ft_printf("||Returned: %d ||\n\n", ft_printf("80\t%020.15u\n", -2147483647 - 1));

	// When 0
	ft_printf("||Returned: %d ||\n\n", ft_printf("81\t%.u\n", 0));
	ft_printf("||Returned: %d ||\n\n", ft_printf("82\t%20.u\n", 0));
	ft_printf("||Returned: %d ||\n\n", ft_printf("83\t%020u\n", 0));
	ft_printf("||Returned: %d ||\n\n", ft_printf("84\t%-20u\n", 0));
	ft_printf("||Returned: %d ||\n\n", ft_printf("85\t%20u\n", 0));

	// Unsigned
	ft_printf("||Returned: %d ||\n\n", ft_printf("86\t%u\n", -20));
	ft_printf("||Returned: %d ||\n\n", ft_printf("87\t%u\n", -2147483647 + 20));
	ft_printf("||Returned: %d ||\n\n", ft_printf("88\t%u\n", -21447));

	//			%%				//
	ft_printf("\t\t||\tTESTS FOR %%%%\t||\n");
	ft_printf("||Returned: %d ||\n\n", ft_printf("89\t%.10%\n"));
	ft_printf("||Returned: %d ||\n\n", ft_printf("90\t%10%\n"));
	ft_printf("||Returned: %d ||\n\n", ft_printf("91\t%010%\n"));
	ft_printf("||Returned: %d ||\n\n", ft_printf("92\t%-10%\n"));

//	while (1);
	return (0);
}
