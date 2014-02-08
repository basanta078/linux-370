#include<stdio.h>                                                               
#include<linux/unistd.h> /* Defines _syscall0 and has mygetpid syscall number */
#include<errno.h>                                                               
                                                                             
//_syscall0(long, mygetpid)                                                     
                                                                             
int main(int argc, char *argv[])                                                
{                                                                               
     if ( argc != 2) //besides the program name there should be pid          
     {                                                                       
             printf("Pass Process ID as command line argument\n");           
             return 0;                                                       
     }                                                                       
                                                                             
     long pid = atol(argv[1]);                                               
     //printf("Process ID: %d\n", pid);                                      
     syscall(290, pid);                                                      
     return 0;                                                               
}
