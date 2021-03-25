#!/usr/bin/env bash

libftprintf_path=".."
libftprintf_file="libftprintf.a"
printf_a="$libftprintf_path/$libftprintf_file"

srcs=(test.c)
true_file="true.txt"
this_file="this.txt"
bin_="a.out"

function ft_compile () {
	gcc -Wall -Wextra -Werror $srcs $printf_a -DFT_PRINTF=$1 -o $bin_
	./$bin_ | cat -e > $2
}

if [ "$1" == "clean" ]; then
	rm -f $true_file $this_file $bin_
	echo "Trailing files cleaned!"
	exit
fi

make -C $libftprintf_path fclean && make -C $libftprintf_path -j

ft_compile printf $true_file
ft_compile ft_printf $this_file

diff $true_file $this_file && echo "No difference"
echo "Now, how about checking leaks ?!"
echo "Did you checked the norm?"
