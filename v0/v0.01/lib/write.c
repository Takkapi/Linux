#define __LIBRARY__
#include <unistd.h>

_syscall3(int,write,int,fs,const char *,buf,off_t,count)
