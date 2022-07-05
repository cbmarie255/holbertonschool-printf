#include "main.h"

/**
 *get_conversion - function pointer that will perform
 *the respective specifier's task
 *@check: checks to see if conversion exists
 *Return: True or NULL
 */
int (*get_conversion(char check))(va_list)
{
	ch_con op[] = {
		{"c", pf_char},
		{"s", pf_string},
		{"%", pf_percent},
		{"d", pf_int},
		{"i", pf_int},
		{NULL, NULL}
	};
	int i;

	for (i = 0; op[i].ch != NULL; i++)
	{
		if (op[i].ch == NULL)
			break;
		if (check == op[i].ch[0])
			return (op[i].type);
	}
	return (0);
}
