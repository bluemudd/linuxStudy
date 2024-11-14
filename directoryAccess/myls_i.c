#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>


int main(int argc, char * argv[]){

	char* dir;
	if(argc == 1){
		dir=".";
	
	}else{
		dir = argv[1];
	}

	DIR* dp;
	if((dp = opendir(dir)) == NULL){
	
		perror(dir);
		exit(1);
	}

	struct dirent* d;
	while((d = readdir(dp)) != NULL){
	
		printf("%lu %s\n", d->d_ino, d->d_name);
	}
	closedir(dp);


	exit(0);


}
