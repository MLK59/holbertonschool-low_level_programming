#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc string)
 * @len: length of the string
 * @next: points to the next node
 * Description: singly linked list node structure
 */

typedef struct list_s
{
	char *str;
	unsigned long int len;
	struct list_s *next;
} list_t;


size_t print_list(const list_t *h);

#endif