#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc, char* argv[]){

	struct stat buf;

	for (int i = 1; i< argc; i++){
		printf("%s: ", argv[i]);
		if(lstat(argv[i], &buf) < 0){
			perror("lstat()");
		}
		else{
		
				if(S_ISREG(buf.st_mode)){
				   printf("%s\n", "normal");
				}
				if(S_ISDIR(buf.st_mode)){
				   printf("%s\n", "directory");
				}
				if(S_ISCHR(buf.st_mode)){
				   printf("%s\n", "text device");
				}
				if(S_ISBLK(buf.st_mode)){
				   printf("%s\n", "block device");
				}
				if(S_ISFIFO(buf.st_mode)){
				   printf("%s\n", "fifo");
				}
				if(S_ISSOCK(buf.st_mode)){
				   printf("%s\n", "socket");
				}
				if(S_ISLNK(buf.st_mode)){
				   printf("%s\n", "symbolic link");
				}
		}
	
	
	
		exit(0);
	}





}
