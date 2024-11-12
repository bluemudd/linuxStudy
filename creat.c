#include <fcntl.h> // open(), creat(), O_WRONLY
#include <unistd.h> // close()
#include <stdio.h>
#include <stdlib.h> // exit()


#define PERMS 0644

int main(int arg, char* argv[])
{
	int fd;
	if((fd = open(argv[1], O_WRONLY | O_CREAT | O_TRUNC, PERMS)) -1){
	//if ((fd =open(argv[1], O_WRONLY | O_CREAT | O_TRUNC, PERMS)) == -1){
	//if ((fd =open(argv[1], O_WRONLY | O_CREAT | O_EXCL, PERMS)) == -1){
	//if ((fd =open(argv[1], O_WRONLY | O_CREAT | O_APPEND, PERMS)) == -1){
	//if ((fd =open(argv[1], PERMS)) == =1){
		printf("file open error\n");
		exit(-1);
	}

	printf("file %s open success: %d\n", argv[1], fd);

	close(fd);

	exit(0);
	}
