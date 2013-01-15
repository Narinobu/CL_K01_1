/*1T5 (9) ¬“cMO*/
/*‰Û‘è04_2*/

#include <stdio.h>


void main(void)	{
	char s[] = "‚©‚ñ‚½‚ñ‚¾‚bŒ¾Œê";
	int i;
	s[10] = '\0';
	for(i = 0; i != '\0' ; i = i + 1)	{
		printf("%s", s[i]);
	}
}
	