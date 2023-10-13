#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - generates & prints passwords for the crackme5 executable
 * @argc: The number of arguments
 * @argv: array of pointers to the arguments
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char passwd[7], *code;
	int len = strlen(argv[1]), x, tmp;

	code = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	temp = (len ^ 59) & 63;
	passwd[0] = code[tmp];

	tmp = 0;
	for (x = 0; x < len; x++)
		tmp += argv[1][x];
	passwd[1] = code[(tmp ^ 79) & 63];

	tmp = 1;
	for (x = 0; x < len; x++)
		tmp *= argv[1][x];
	passwd[2] = code[(tmp ^ 85) & 63];

	tmp = 0;
	for (x = 0; x < len; x++)
	{
		if (argv[1][x] > tmp)
			tmp = argv[1][x];
	}
	srand(tmp ^ 14);
	passwd[3] = code[rand() & 63];

	tmp = 0;
	for (x = 0; x < len; x++)
		tmp += (argv[1][x] * argv[1][x]);
	passwd[4] = code[(tmp ^ 239) & 63];

	for (x = 0; x < argv[1][0]; x++)
		tmp = rand();
	passwd[5] = code[(tmp ^ 229) & 63];

	passwd[6] = '\0';
	printf("%s", passwd);
	return (0);
}
