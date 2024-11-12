#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>


int main(int argc, char* argv[]){


	struct stat buf;

	if(lstat(argv[0], &buf) <0){
		perror("lstat()");
	}else{
	
		printf("file size: %ld bytes\n", buf.st_size);
		printf("file permissions: %o \n", buf.st_mode & 0777);
		printf("Last modified: %ld\n", buf.st_mtime);
	
	} 



	exit(0);



}
