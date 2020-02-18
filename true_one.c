/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   true_one.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 16:13:17 by mli               #+#    #+#             */
/*   Updated: 2020/02/18 13:41:46 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
int				ft_printf(const char *str, ...);

int		main(void)
{
	//				%c				//
	printf("\t\t||\tTESTS FOR %%C\t||\n");
	printf("||Returned: %d ||\n\n", printf("1\t%c\n", 'r'));
	printf("||Returned: %d ||\n\n", printf("2\t%c\n", -142));
	printf("||Returned: %d ||\n\n", printf("3\t%20c\n", -142));
	printf("||Returned: %d ||\n\n", printf("4\t%-20c\n", -142));
	printf("||Returned: %d ||\n\n", printf("\n5\tJust printing an r : %c\n", 'r'));
	printf("||Returned: %d ||\n\n", printf("6\tJust printing ok : %c and %c !\n", 'o', 'k'));
	//				%s				//
	printf("\t\t||\tTESTS FOR %%S\t||\n");
	char r[] = {'1', '2', '3', '4', '5', '\0'};
	char r2[] = {'1', '2', '3', '4', '5'};
	printf("||Returned: %d ||\n\n", printf("7\t%s\n", r));
	printf("||Returned: %d ||\n\n", printf("8\t%.s\n", r));
	printf("||Returned: %d ||\n\n", printf("9\t%.s\n", 42));
	printf("||Returned: %d ||\n\n", printf("10\t%.0s\n", r));
	printf("||Returned: %d ||\n\n", printf("11\t%.3s\n", r));
	printf("||Returned: %d ||\n\n", printf("12\t%.3s\n", r2));
	printf("||Returned: %d ||\n\n", printf("13\t%.30s\n", r));
	printf("||Returned: %d ||\n\n", printf("14\t%30.3s\n", r));
	printf("||Returned: %d ||\n\n", printf("15\t%30.s\n", r));
	printf("||Returned: %d ||\n\n", printf("16\t%-30.s\n", r));
	printf("||Returned: %d ||\n\n", printf("17\t%-30s\n", r));
	printf("||Returned: %d ||\n\n", printf("18\t%s %-30.3s %s\n", r, NULL, NULL));

	//			%xX	&& *		//
	printf("\t\t||\tTESTS FOR %%xX and Parsing with *\t||\n");
	printf("||Returned: %d ||\n\n", printf("19\t%20.15X\n", 2147483647));
	printf("||Returned: %d ||\n\n", printf("20\t%-20.15X\n", 2147483647));
	printf("||Returned: %d ||\n\n", printf("21\t%020.15X\n", 2147483647));
	printf("||Returned: %d ||\n\n", printf("22\t%-*.*X\n", -20, -15, 2147483647));
	printf("||Returned: %d ||\n\n", printf("23\t%*.*X\n", 20, -15, 2147483647));
	printf("||Returned: %d ||\n\n", printf("24\t%*.*X\n", -20, -15, 2147483647));
	printf("||Returned: %d ||\n\n", printf("25\t%0*.*X\n", -20, -15, 2147483647));
	printf("||Returned: %d ||\n\n", printf("26\t%*.*X\n", -20, 15, -2147483647));
	printf("||Returned: %d ||\n\n", printf("27\t%*.*X\n", -20, 15, -1));

	// Parsing
	printf("||Returned: %d ||\n\n", printf("28\t%*.*X\n", -20, 15, -123456));
	printf("||Returned: %d ||\n\n", printf("29\t%.*X\n", 15, -123456));
	printf("||Returned: %d ||\n\n", printf("30\t%*X\n", -20, -123456));
	printf("||Returned: %d ||\n\n", printf("31\t%*X\n", 20, -123456));
	printf("||Returned: %d ||\n\n", printf("32\t%X\n", -123456));
	printf("||Returned: %d ||\n\n", printf("33\t%x\n", -123456));
	printf("||Returned: %d ||\n\n", printf("34\t%x\n", 123456));
	printf("||Returned: %d ||\n\n", printf("35\t%x\n", 0));
	printf("||Returned: %d ||\n\n", printf("36\t%.3x\n", 123456));
	printf("||Returned: %d ||\n\n", printf("37\t%3x\n", 123456));
	printf("||Returned: %d ||\n\n", printf("38\t%020.15x\n", -2147483647 - 1));

	// When 0
	printf("||Returned: %d ||\n\n", printf("39\t%.x\n", 0));
	printf("||Returned: %d ||\n\n", printf("40\t%20.x\n", 0));
	printf("||Returned: %d ||\n\n", printf("41\t%020x\n", 0));
	printf("||Returned: %d ||\n\n", printf("42\t%-20x\n", 0));
	printf("||Returned: %d ||\n\n", printf("43\t%20x\n", 0));

	//				%p	 		//
	printf("\t\t||\tTESTS FOR %%P\t||\n");
	printf("||Returned: %d ||\n\n", printf("44\tAddress %p\n", 140732897249832));
	printf("||Returned: %d ||\n\n", printf("45\tAddress %20p\n", 140732856650280));
	printf("||Returned: %d ||\n\n", printf("46\tAddress %-20p\n", 140732656753192));

	//			%di				//
	// Basics
	printf("\t\t||\tTESTS FOR %%D & I + Parsing\t||\n");
	printf("||Returned: %d ||\n\n", printf("47\t%d\n", 0));
	printf("||Returned: %d ||\n\n", printf("48\t%d\n", 123456));
	printf("||Returned: %d ||\n\n", printf("49\t%d\n", -123456));
	// Basics with %i
	printf("||Returned: %i ||\n\n", printf("50\t%i\n", 0));
	printf("||Returned: %i ||\n\n", printf("51\t%i\n", 123456));
	printf("||Returned: %i ||\n\n", printf("52\t%i\n", -123456));

	// Comptage du -
	printf("||Returned: %d ||\n\n", printf("53\t%d\n", -1));
	printf("||Returned: %d ||\n\n", printf("54\t%1d\n", -1));
	printf("||Returned: %d ||\n\n", printf("55\t%2d\n", -1));
	printf("||Returned: %d ||\n\n", printf("56\t%3d\n", -1));
	printf("||Returned: %d ||\n\n", printf("57\t%4d\n", -1));

	// Bon placement du -
	printf("||Returned: %d ||\n\n", printf("58\t%020.15d\n", -1));
	printf("||Returned: %d ||\n\n", printf("59\t%20.15d\n", -1));
	printf("||Returned: %d ||\n\n", printf("60\t%-20.15d\n", -123));

	// Int max et min
	printf("||Returned: %d ||\n\n", printf("61\t%d\n", 2147483647));
	printf("||Returned: %d ||\n\n", printf("62\t%d\n", -2147483647 - 1));
	printf("||Returned: %d ||\n\n", printf("63\t%020.15d\n", -2147483647 - 1));

	// When 0
	printf("||Returned: %d ||\n\n", printf("64\t%.d\n", 0));
	printf("||Returned: %d ||\n\n", printf("65\t%20.d\n", 0));
	printf("||Returned: %d ||\n\n", printf("66\t%020d\n", 0));
	printf("||Returned: %d ||\n\n", printf("67\t%-20d\n", 0));
	printf("||Returned: %d ||\n\n", printf("67\t%20d\n", 0));

	// Parsing
	printf("||Returned: %d ||\n\n", printf("68\t%00000000004d\n", -1));
	printf("||Returned: %d ||\n\n", printf("69\t%00000-00004d\n", -1));
	printf("||Returned: %d ||\n\n", printf("70\t%----------4d\n", -1));
	printf("||Returned: %d ||\n\n", printf("71\t%.0005d\n", 132));

	//			%u				//
	printf("\t\t||\tTESTS FOR %%U\t||\n");
	// Basics
	printf("||Returned: %d ||\n\n", printf("72\t%u\n", 0));
	printf("||Returned: %d ||\n\n", printf("73\t%u\n", 123456));
	printf("||Returned: %d ||\n\n", printf("74\t%u\n", -123456));

	printf("||Returned: %d ||\n\n", printf("75\t%020.15u\n", -1));
	printf("||Returned: %d ||\n\n", printf("76\t%20.15u\n", -1));
	printf("||Returned: %d ||\n\n", printf("77\t%-20.15u\n", -123));

	// Int max et min
	printf("||Returned: %d ||\n\n", printf("78\t%u\n", 2147483647));
	printf("||Returned: %d ||\n\n", printf("79\t%u\n", -2147483647 - 1));
	printf("||Returned: %d ||\n\n", printf("80\t%020.15u\n", -2147483647 - 1));

	// When 0
	printf("||Returned: %d ||\n\n", printf("81\t%.u\n", 0));
	printf("||Returned: %d ||\n\n", printf("82\t%20.u\n", 0));
	printf("||Returned: %d ||\n\n", printf("83\t%020u\n", 0));
	printf("||Returned: %d ||\n\n", printf("84\t%-20u\n", 0));
	printf("||Returned: %d ||\n\n", printf("85\t%20u\n", 0));

	// Unsigned
	printf("||Returned: %d ||\n\n", printf("86\t%u\n", -20));
	printf("||Returned: %d ||\n\n", printf("87\t%u\n", -2147483647 + 20));
	printf("||Returned: %d ||\n\n", printf("88\t%u\n", -21447));

	//			%%				//
	printf("\t\t||\tTESTS FOR %%%%\t||\n");
	printf("||Returned: %d ||\n\n", printf("89\t%.10%\n"));
	printf("||Returned: %d ||\n\n", printf("90\t%10%\n"));
	printf("||Returned: %d ||\n\n", printf("91\t%010%\n"));
	printf("||Returned: %d ||\n\n", printf("92\t%-10%\n"));

//	while (1);
	return (0);
}
