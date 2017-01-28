#include<stdio.h>
#include"bits.h"

int main(int argc, char *argv[])
{
	FILE *file_ptr_ip;
	FILE *file_ptr_op;
	file_ptr_ip = fopen(argv[1], "r");
	file_ptr_op = fopen(argv[2], "w");
	char buff[100];
	while(fgets(buff, 100, file_ptr_ip))
	{
		fprintf(file_ptr_op, "%u %d\n", BinaryMirror(atoi(buff)), SequenceCount(atoi(buff)));
	}
	return 0;
}
