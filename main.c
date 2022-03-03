#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "splitline.h"

int main(void)
{
	char** strs;
	int fields;
	int itr;

	char src[] = "0x12:0x34:0x56\t";
	src[ strlen(src) -1 ] = '\0';

	strs = splitline(src, ':', &fields);

	for( itr = 0; itr < fields; itr++){
		printf("%s\n", strs[itr]);
	}

	return 0;
}
