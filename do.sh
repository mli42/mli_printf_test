libftprintf_path=".."
true_file="true.txt"
this_file="this.txt"

make -C $libftprintf_path fclean && make -C $libftprintf_path -j4

gcc -Wall -Werror -Wextra test.c ../libftprintf.a -DFT_PRINTF=printf
./a.out | cat -e > $true_file

gcc -Wall -Werror -Wextra test.c ../libftprintf.a -DFT_PRINTF=ft_printf
./a.out | cat -e > $this_file

diff $true_file $this_file && echo "No difference"
echo "Now, how about checking leaks ?!"
echo "Did you checked the norm?"
