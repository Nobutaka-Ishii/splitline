#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <splitline.h>

int main(void)
{
	char** strs;
	int fields;
	int itr;

	char src[] = "0x12:0x345:0x678"; // example string to split

	strs = splitline(src, ':', &fields);

	for( itr = 0; itr < fields; itr++){
		printf("%s\n", strs[itr]);
	}

	return 0;
}
