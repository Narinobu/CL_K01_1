/*1T5 (9) 成田信弘*/
/*課題04_2*/

#include <stdio.h>


void main(void)	{
	char s[] = "かんたんだＣ言語";
	int i;
	s[10] = '\0';
	for(i = 0; i != '\0' ; i = i + 1)	{
		printf("%s", s[i]);
	}
}
	