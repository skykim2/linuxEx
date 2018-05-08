#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
  int fd ;
  char tmp[50];
char tmp1[50];
char tmp2[50] = "eggs";
char tmp3[50];
  char rbuf[50];
  int wcount;
  int rcount;
  int pos;
fd = open("./test.txt", O_RDWR |O_CREAT|O_TRUNC, \
      S_IRWXU |S_IWGRP | S_IRGRP | S_IROTH);
fd = open("./testcopy.txt", O_RDWR |O_CREAT|O_TRUNC, \
      S_IRWXU |S_IWGRP | S_IRGRP | S_IROTH);

if(fd==-1)
{
 printf("file open error!\n");
 return -1;
}


//버퍼에 텍스트 뮨자열 만들기
sprintf(tmp, "Do not count the before they hatch.");
rcount=read(fd,rbuf,17);
rbuf[rcount]='\0';
printf("rcount=%d\n", rcount);
printf("rbuf : %s\n", rbuf);
sprintf(wbuf, %seggs", rbuf);


strncpy(tmp1, tmp, 16);
strcat(tmp3, tmp1);
strcat(tmp3, tmp2);
printf("%s\n", tmp3);
sprintf(tmp3, "before they hatch."); 
printf("%s\n", tmp3);
printf("fd=%d\n", fd);

//test.txt 파일에 문자열 쓰기
wcount=write(fd, tmp, strlen(tmp));
//파일에 쓴 문자열의 갯수 출력
printf("wcount=%d\n", wcount);
//파일 내의 커서 위치를 시작점 기준으로 offset 0번지로 이동
pos = lseek(fd, 0, SEEK_SET);
//pos = lseek(fd, 15, SEEK_CUR);
//lseek(fd, offset, SEEK_END);
//lseek(fd, offset, SEEK_CUR);
//파일 읽기 -> rbuf배열에 채움
rcount = read(fd, rbuf, strlen(tmp));
//읽은 문자열의 갯수를 확인
printf("rcount=%d\n", rcount);
//읽은 버퍼의 내용 확인
printf("rbuf=%s\n", rbuf);
#ifdef DEBUG
   printf("fd=%d\n", fd);
#endif
close(fd);

/*fd=creat("./test2.txt",0764);
if(fd==-1)
{
printf("file errpor!\n");
return -1;
}
printf("fd=%d\n", fd);*/
return 0;
}
