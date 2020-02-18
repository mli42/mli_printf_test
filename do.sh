make -C ../ re
gcc -Wall -Werror -Wextra test.c ../libftprintf.a
./a.out | cat -e > output.txt
diff printf.txt output.txt
echo "Has any difference ??"
echo "Now, how about checking leaks ?!"
