/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   true_one.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 16:13:17 by mli               #+#    #+#             */
/*   Updated: 2019/12/01 23:07:17 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
int				ft_printf(const char *str, ...);

int		main(void)
{
	//				%c				//
	printf("\t\t||\tTESTS FOR %%C\t||\n");
	printf("||Returned: %d ||\n\n", printf("%c\n", 'r'));
	printf("||Returned: %d ||\n\n", printf("%c\n", -142));
	printf("||Returned: %d ||\n\n", printf("%20c\n", -142));
	printf("||Returned: %d ||\n\n", printf("%-20c\n", -142));
	printf("||Returned: %d ||\n\n", printf("\nJust printing an r : %c\n", 'r'));
	printf("||Returned: %d ||\n\n", printf("Just printing ok : %c and %c !\n", 'o', 'k'));
	//				%s				//
	printf("\t\t||\tTESTS FOR %%S\t||\n");
	char r[] = {'1', '2', '3', '4', '5', '\0'};
	char r2[] = {'1', '2', '3', '4', '5'};
	printf("||Returned: %d ||\n\n", printf("%s\n", r));
	printf("||Returned: %d ||\n\n", printf("%.s\n", r));
	printf("||Returned: %d ||\n\n", printf("%.s\n", 42));
	printf("||Returned: %d ||\n\n", printf("%.0s\n", r));
	printf("||Returned: %d ||\n\n", printf("%.3s\n", r));
	printf("||Returned: %d ||\n\n", printf("%.3s\n", r2));
	printf("||Returned: %d ||\n\n", printf("%.30s\n", r));
	printf("||Returned: %d ||\n\n", printf("%30.3s\n", r));
	printf("||Returned: %d ||\n\n", printf("%30.s\n", r));
	printf("||Returned: %d ||\n\n", printf("%-30.s\n", r));
	printf("||Returned: %d ||\n\n", printf("%-30s\n", r));
	printf("||Returned: %d ||\n\n", printf("%s %-30.3s %s\n", r, NULL, NULL));

	//			%xX	&& *		//
	printf("\t\t||\tTESTS FOR %%xX and Parsing with *\t||\n");
	printf("||Returned: %d ||\n\n", printf("%20.15X\n", 2147483647));
	printf("||Returned: %d ||\n\n", printf("%-20.15X\n", 2147483647));
	printf("||Returned: %d ||\n\n", printf("%020.15X\n", 2147483647));
	printf("||Returned: %d ||\n\n", printf("%-*.*X\n", -20, -15, 2147483647));
	printf("||Returned: %d ||\n\n", printf("%*.*X\n", 20, -15, 2147483647));
	printf("||Returned: %d ||\n\n", printf("%*.*X\n", -20, -15, 2147483647));
	printf("||Returned: %d ||\n\n", printf("%0*.*X\n", -20, -15, 2147483647));
	printf("||Returned: %d ||\n\n", printf("%*.*X\n", -20, 15, -2147483647));
	printf("||Returned: %d ||\n\n", printf("%*.*X\n", -20, 15, -1));

	// Parsing
	printf("||Returned: %d ||\n\n", printf("%*.*X\n", -20, 15, -123456));
	printf("||Returned: %d ||\n\n", printf("%.*X\n", 15, -123456));
	printf("||Returned: %d ||\n\n", printf("%*X\n", -20, -123456));
	printf("||Returned: %d ||\n\n", printf("%*X\n", 20, -123456));
	printf("||Returned: %d ||\n\n", printf("%X\n", -123456));
	printf("||Returned: %d ||\n\n", printf("%x\n", -123456));
	printf("||Returned: %d ||\n\n", printf("%x\n", 123456));
	printf("||Returned: %d ||\n\n", printf("%x\n", 0));
	printf("||Returned: %d ||\n\n", printf("%.3x\n", 123456));
	printf("||Returned: %d ||\n\n", printf("%3x\n", 123456));
	printf("||Returned: %d ||\n\n", printf("%020.15x\n", -2147483647 - 1));

	// When 0
	printf("||Returned: %d ||\n\n", printf("%.x\n", 0));
	printf("||Returned: %d ||\n\n", printf("%20.x\n", 0));
	printf("||Returned: %d ||\n\n", printf("%020x\n", 0));
	printf("||Returned: %d ||\n\n", printf("%-20x\n", 0));
	printf("||Returned: %d ||\n\n", printf("%20x\n", 0));

	//				%p	 		//
	printf("\t\t||\tTESTS FOR %%P\t||\n");
	printf("||Returned: %d ||\n\n", printf("Address %p\n", 140732897249832));
	printf("||Returned: %d ||\n\n", printf("Address %20p\n", 140732856650280));
	printf("||Returned: %d ||\n\n", printf("Address %-20p\n", 140732656753192));

	//			%di				//
	// Basics
	printf("\t\t||\tTESTS FOR %%D & I + Parsing\t||\n");
	printf("||Returned: %d ||\n\n", printf("%d\n", 0));
	printf("||Returned: %d ||\n\n", printf("%d\n", 123456));
	printf("||Returned: %d ||\n\n", printf("%d\n", -123456));
	// Basics with %i
	printf("||Returned: %i ||\n\n", printf("%i\n", 0));
	printf("||Returned: %i ||\n\n", printf("%i\n", 123456));
	printf("||Returned: %i ||\n\n", printf("%i\n", -123456));

	// Comptage du -
	printf("||Returned: %d ||\n\n", printf("%d\n", -1));
	printf("||Returned: %d ||\n\n", printf("%1d\n", -1));
	printf("||Returned: %d ||\n\n", printf("%2d\n", -1));
	printf("||Returned: %d ||\n\n", printf("%3d\n", -1));
	printf("||Returned: %d ||\n\n", printf("%4d\n", -1));

	// Bon placement du -
	printf("||Returned: %d ||\n\n", printf("%020.15d\n", -1));
	printf("||Returned: %d ||\n\n", printf("%20.15d\n", -1));
	printf("||Returned: %d ||\n\n", printf("%-20.15d\n", -123));

	// Int max et min
	printf("||Returned: %d ||\n\n", printf("%d\n", 2147483647));
	printf("||Returned: %d ||\n\n", printf("%d\n", -2147483647 - 1));
	printf("||Returned: %d ||\n\n", printf("%020.15d\n", -2147483647 - 1));

	// When 0
	printf("||Returned: %d ||\n\n", printf("%.d\n", 0));
	printf("||Returned: %d ||\n\n", printf("%20.d\n", 0));
	printf("||Returned: %d ||\n\n", printf("%020d\n", 0));
	printf("||Returned: %d ||\n\n", printf("%-20d\n", 0));
	printf("||Returned: %d ||\n\n", printf("%20d\n", 0));

	// Parsing
	printf("||Returned: %d ||\n\n", printf("%00000000004d\n", -1));
	printf("||Returned: %d ||\n\n", printf("%00000-00004d\n", -1));
	printf("||Returned: %d ||\n\n", printf("%----------4d\n", -1));
	printf("||Returned: %d ||\n\n", printf("%.0005d\n", 132));

	//			%u				//
	printf("\t\t||\tTESTS FOR %%U\t||\n");
	// Basics
	printf("||Returned: %d ||\n\n", printf("%u\n", 0));
	printf("||Returned: %d ||\n\n", printf("%u\n", 123456));
	printf("||Returned: %d ||\n\n", printf("%u\n", -123456));

	printf("||Returned: %d ||\n\n", printf("%020.15u\n", -1));
	printf("||Returned: %d ||\n\n", printf("%20.15u\n", -1));
	printf("||Returned: %d ||\n\n", printf("%-20.15u\n", -123));

	// Int max et min
	printf("||Returned: %d ||\n\n", printf("%u\n", 2147483647));
	printf("||Returned: %d ||\n\n", printf("%u\n", -2147483647 - 1));
	printf("||Returned: %d ||\n\n", printf("%020.15u\n", -2147483647 - 1));

	// When 0
	printf("||Returned: %d ||\n\n", printf("%.u\n", 0));
	printf("||Returned: %d ||\n\n", printf("%20.u\n", 0));
	printf("||Returned: %d ||\n\n", printf("%020u\n", 0));
	printf("||Returned: %d ||\n\n", printf("%-20u\n", 0));
	printf("||Returned: %d ||\n\n", printf("%20u\n", 0));

	// Unsigned
	printf("||Returned: %d ||\n\n", printf("%u\n", -20));
	printf("||Returned: %d ||\n\n", printf("%u\n", -2147483647 + 20));
	printf("||Returned: %d ||\n\n", printf("%u\n", -21447));

	//			%%				//
	printf("\t\t||\tTESTS FOR %%%%\t||\n");
	printf("||Returned: %d ||\n\n", printf("%.10%\n"));
	printf("||Returned: %d ||\n\n", printf("%10%\n"));
	printf("||Returned: %d ||\n\n", printf("%010%\n"));
	printf("||Returned: %d ||\n\n", printf("%-10%\n"));

	return (0);
}
