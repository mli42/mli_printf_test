/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 16:13:17 by mli               #+#    #+#             */
/*   Updated: 2019/12/01 23:11:36 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
int				ft_printf(const char *str, ...);

int		main(void)
{
	//				%c				//
	ft_printf("\t\t||\tTESTS FOR %%C\t||\n");
	ft_printf("||Returned: %d ||\n\n", ft_printf("%c\n", 'r'));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%c\n", -142));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%20c\n", -142));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%-20c\n", -142));
	ft_printf("||Returned: %d ||\n\n", ft_printf("\nJust printing an r : %c\n", 'r'));
	ft_printf("||Returned: %d ||\n\n", ft_printf("Just printing ok : %c and %c !\n", 'o', 'k'));
	//				%s				//
	ft_printf("\t\t||\tTESTS FOR %%S\t||\n");
	char r[] = {'1', '2', '3', '4', '5', '\0'};
	char r2[] = {'1', '2', '3', '4', '5'};
	ft_printf("||Returned: %d ||\n\n", ft_printf("%s\n", r));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%.s\n", r));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%.s\n", 42));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%.0s\n", r));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%.3s\n", r));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%.3s\n", r2));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%.30s\n", r));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%30.3s\n", r));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%30.s\n", r));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%-30.s\n", r));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%-30s\n", r));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%s %-30.3s %s\n", r, NULL, NULL));

	//			%xX	&& *		//
	ft_printf("\t\t||\tTESTS FOR %%xX and Parsing with *\t||\n");
	ft_printf("||Returned: %d ||\n\n", ft_printf("%20.15X\n", 2147483647));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%-20.15X\n", 2147483647));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%020.15X\n", 2147483647));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%-*.*X\n", -20, -15, 2147483647));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%*.*X\n", 20, -15, 2147483647));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%*.*X\n", -20, -15, 2147483647));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%0*.*X\n", -20, -15, 2147483647));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%*.*X\n", -20, 15, -2147483647));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%*.*X\n", -20, 15, -1));

	// Parsing
	ft_printf("||Returned: %d ||\n\n", ft_printf("%*.*X\n", -20, 15, -123456));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%.*X\n", 15, -123456));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%*X\n", -20, -123456));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%*X\n", 20, -123456));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%X\n", -123456));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%x\n", -123456));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%x\n", 123456));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%x\n", 0));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%.3x\n", 123456));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%3x\n", 123456));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%020.15x\n", -2147483647 - 1));

	// When 0
	ft_printf("||Returned: %d ||\n\n", ft_printf("%.x\n", 0));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%20.x\n", 0));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%020x\n", 0));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%-20x\n", 0));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%20x\n", 0));

	//				%p	 		//
	ft_printf("\t\t||\tTESTS FOR %%P\t||\n");
	ft_printf("||Returned: %d ||\n\n", ft_printf("Address %p\n", 140732897249832));
	ft_printf("||Returned: %d ||\n\n", ft_printf("Address %20p\n", 140732856650280));
	ft_printf("||Returned: %d ||\n\n", ft_printf("Address %-20p\n", 140732656753192));

	//			%di				//
	// Basics
	ft_printf("\t\t||\tTESTS FOR %%D & I + Parsing\t||\n");
	ft_printf("||Returned: %d ||\n\n", ft_printf("%d\n", 0));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%d\n", 123456));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%d\n", -123456));
	// Basics with %i
	ft_printf("||Returned: %i ||\n\n", ft_printf("%i\n", 0));
	ft_printf("||Returned: %i ||\n\n", ft_printf("%i\n", 123456));
	ft_printf("||Returned: %i ||\n\n", ft_printf("%i\n", -123456));

	// Comptage du -
	ft_printf("||Returned: %d ||\n\n", ft_printf("%d\n", -1));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%1d\n", -1));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%2d\n", -1));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%3d\n", -1));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%4d\n", -1));

	// Bon placement du -
	ft_printf("||Returned: %d ||\n\n", ft_printf("%020.15d\n", -1));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%20.15d\n", -1));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%-20.15d\n", -123));

	// Int max et min
	ft_printf("||Returned: %d ||\n\n", ft_printf("%d\n", 2147483647));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%d\n", -2147483647 - 1));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%020.15d\n", -2147483647 - 1));

	// When 0
	ft_printf("||Returned: %d ||\n\n", ft_printf("%.d\n", 0));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%20.d\n", 0));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%020d\n", 0));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%-20d\n", 0));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%20d\n", 0));

	// Parsing
	ft_printf("||Returned: %d ||\n\n", ft_printf("%00000000004d\n", -1));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%00000-00004d\n", -1));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%----------4d\n", -1));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%.0005d\n", 132));

	//			%u				//
	ft_printf("\t\t||\tTESTS FOR %%U\t||\n");
	// Basics
	ft_printf("||Returned: %d ||\n\n", ft_printf("%u\n", 0));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%u\n", 123456));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%u\n", -123456));

	ft_printf("||Returned: %d ||\n\n", ft_printf("%020.15u\n", -1));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%20.15u\n", -1));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%-20.15u\n", -123));

	// Int max et min
	ft_printf("||Returned: %d ||\n\n", ft_printf("%u\n", 2147483647));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%u\n", -2147483647 - 1));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%020.15u\n", -2147483647 - 1));

	// When 0
	ft_printf("||Returned: %d ||\n\n", ft_printf("%.u\n", 0));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%20.u\n", 0));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%020u\n", 0));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%-20u\n", 0));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%20u\n", 0));

	// Unsigned
	ft_printf("||Returned: %d ||\n\n", ft_printf("%u\n", -20));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%u\n", -2147483647 + 20));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%u\n", -21447));

	//			%%				//
	ft_printf("\t\t||\tTESTS FOR %%%%\t||\n");
	ft_printf("||Returned: %d ||\n\n", ft_printf("%.10%\n"));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%10%\n"));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%010%\n"));
	ft_printf("||Returned: %d ||\n\n", ft_printf("%-10%\n"));

//	while (1);
	return (0);
}
