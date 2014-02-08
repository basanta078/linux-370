#include<stdio.h>                                                               
#include<linux/unistd.h>
#include<errno.h>                                                               
#include<fcntl.h>                                                               
                                                                             
//_syscall0(long, mygetpid)                                                     
int main()                                                                      
{                                                                               
     //printf("Process ID: %d\n", syscall(285));                             
     int fd = syscall(291, "lala.txt", O_WRONLY, 0);                         
     if (fd >= 0){                                                           
             printf("working\n");                                            
             syscall(292, fd, "lala", 4);                                    
             //sys_close(fd);                                                
     }                                                                       
     printf("Value %d \n", fd);                                              
     return 0;                                                               
}
