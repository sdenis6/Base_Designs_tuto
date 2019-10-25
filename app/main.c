#include <stdio.h>
#include <stdint.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "fir16bits_conf.h"


int main()
{int k;
 char c[16384];
 int fi,fo;
 fi=open("/dev/data1600",O_RDWR);
 fo=open("/tmp/data.bin",O_WRONLY|O_CREAT,S_IRWXU);
 fir16bits_send_confSigned("/dev/datafir0","coefs.txt",32);
 for (k=1;k<5;k++)
  {read(fi,c,16384);
   write(fo,c,16384);
  }
 close(fi);
 close(fo);
}
