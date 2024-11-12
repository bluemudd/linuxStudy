#include <stdio.h>
#include <stdlib.h>
#include <utime.h>
#include <sys/types.h>

int main(int argc, char * argv[]){

	if(argc < 2){
		fprintf(stderr, "usage: %s file1\n", argv[0]);
		exit(-1);
	}

	utime(argv[1], NULL);

	exit(0);




}
