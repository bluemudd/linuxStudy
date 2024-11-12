#include <fcntl.h> // open(), O_WRONLY
#include <unistd.h> // close()
#include <stdio.h>
#include <stdlib.h> // exit()


int main(int arg, char* argv[])
{
	int fd;
	if((fd=open(argv[1], O_RDONLY)) == -1){
		printf("file open error");
		exit(-1);
	}

	printf("file %s  open success : %d\n", argv[1], fd);

	close(fd);


	exit(0);
}
