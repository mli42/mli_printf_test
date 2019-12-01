make -C ../ re
gcc -Wall -Werror -Wextra test.c ../libftprintf.a
./a.out | cat -e > output.txt
diff mine.txt output.txt
echo "Has any difference ??"
echo "Now, how about checking leaks ?!"
