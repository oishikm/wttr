/*
 * wttr: smart weather in the CLI
 * Oishik Mukhopadhyay | 23 February 2023
 * Special thanks to - https://github.com/chubin/wttr.in
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char** argv)
{
	char wttr_command[64] = "curl wttr.in";
	char buffer[32];
	if(argc>1)
	{
		sprintf(buffer, "/%s", argv[1]);
		strcat(wttr_command, buffer);
	}
	system(wttr_command);
	return 0;
}
