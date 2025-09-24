// 25. 07. 28

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct login {
	char id[21];
	char pw[21];
} LOGIN;

void make_lower(char* id, char* pw)
{
	int i;
	for (i = 0; id[i] != '\0'; i++)
	{
		if (isupper(id[i]))
		{
			id[i] = tolower(id[i]);
		}
	}
	for (i = 0; pw[i] != '\0'; i++)
	{
		if (isupper(pw[i]))
		{
			pw[i] = tolower(pw[i]);
		}
	}
}

void hide_pw(char* pw)
{
	for (int i = 0; pw[i] != '\0'; i++) 
	{
		if (isprint(pw[i])) 
		{
			pw[i] = '*';
		}
	}
}

void print_login()
{
	LOGIN a;
	LOGIN* p = &a;

	printf("ID? ");
	gets_s(a.id, sizeof(a.id));

	printf("PW? ");
	gets_s(a.pw, sizeof(a.pw));

	make_lower(a.id, a.pw);

	hide_pw(a.pw);

	printf("ID: %s\n", a.id);
	printf("PW: %s\n", a.pw);

}

int main()
{
	print_login();
	return 0;
}