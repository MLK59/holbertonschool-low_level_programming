#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Imprime des données en fonction du format spécifié
 * @format: Chaîne de formats à imprimer
 *
 * Description: Imprime différents types de données en fonction d'un format spécifique
 * Retour: Rien (void)
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int i = 0;
	char current_format;

	va_start(args, format);

	while (format && format[i])
    {
		current_format = format[i];
		switch (current_format)
        {
			case 'c':
            	printf("%c", va_arg(args, int));
				break;
            case 'i':
                printf("%d", va_arg(args, int));
				break;
            case 'f':
            	printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL) {
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				i++;
				continue;
		}

		if (format[i + 1])
			printf(", ");

		i++;
	}

	va_end(args);
	printf("\n");
}
