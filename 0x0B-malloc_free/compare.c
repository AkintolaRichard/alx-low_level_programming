#include <stdio.h>

int lenwhile(char *);
int lenptr(char *);

int main(void)
{
	char *f = "first", *s = "second";

	printf("Using While Loop\n");
	printf("string = %s <---> length = %d\n", f, lenwhile(f));
	printf("string = %s <---> length = %d\n", s, lenwhile(s));

	printf("Using Pointers\n");
	printf("string = %s <---> length = %d\n", f, lenptr(f));
	printf("string = %s <---> length = %d\n", s, lenptr(s));
	return (0);
}

int lenwhile(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

int lenptr(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
		s++;
	return (i);
}
