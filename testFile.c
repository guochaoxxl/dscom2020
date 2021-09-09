/* *=+=+=+=+* *** *=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=
  * 作者代号: *** :
  * 版权声明: *** :
  * 联络信箱: *** :
  * 文档用途: *** :
  * 文档信息: *** :~/dscom2020/testFile.c
  * 修订时间: *** *2021年第36周 09月09日 Thursday AM09:38 (252天)
  * 代码说明: *** :自行添加
 * *+=+=+=+=* *** *+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+*/
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

#define Size 24

int main(int argc, char **argv)
{
	char buffer[100];
	char *buf = "This is a great world!";
	int bufSize = strlen(buf);

	printf("%s and length %d\n", buf, bufSize);

	int fd = open("readme", O_RDWR, 0);
	read(fd, buffer, Size);

	buffer[Size] = 0;

	printf("%d char: \n%s\n", Size, buffer);

	close(fd);

	int fd1 = open("readme", O_RDWR, 0);
	write(fd1, buf, bufSize);
	close(fd1);

	return 0;
}
