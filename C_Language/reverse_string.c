#include <stdlib.h>
#include <string.h>

char* str_rev(char *string)
{
	int str_len = strlen(string), i = 0;
	 char temp;
for (; i < str_len/2; i++)
{
	temp = string[i];
	string[i] = string[str_len - i - 1];
	string[str_len -i - 1]  = temp;

}
return (string);
}
