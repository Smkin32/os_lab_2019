#include "revert_string.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
void RevertString(char *str)
{
	char* newstr = (char*)malloc(sizeof(char) * (strlen(str) + 1));
	for (int i = 0; i < strlen(str); i++)
	{
	    newstr[i] = str[strlen(str) - 1 - i];
	}
	newstr[strlen(str)] = 0;
	strcpy(str, newstr);
	free(newstr);
}

