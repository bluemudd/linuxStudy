#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/time.h>
#include <sys/stat.h>
#include <utime.h>

int main (int argc, char * argv[]){


	if(argc < 3){
		fprintf(stderr, "usage: %s file1 file2\n", argv[0]);
		
		exit(1);
	}

	struct stat buf;
	if(stat(argv[1], &buf) < 0){
		perror("stat()");
		exit(-1);
	}

	struct utimbuf time;
	time.actime = buf.st_atime;
	time.modtime = buf.st_mtime;

	if(utime(argv[2], &time)){
		perror("utime");
		exit(-2);
	}
	exit(0);

}
