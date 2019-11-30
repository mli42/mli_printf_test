make -C ../
gcc -Wall -Werror -Wextra test.c ../libftprintf.a
./a.out | cat -e > output.txt
diff output.txt mine.txt
