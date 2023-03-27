

int main(void)
{
	char c = '!';
	char *str = "Hello, world";
	int count = _printf("Printing a character: %c\nPrinting a string: %s\nPrinting a percent sign: %%\n", c, str);
	printf("Printed %d characters\n", count);
	return 0;
}
