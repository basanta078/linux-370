#include<stdio.h>                                                               
#include<linux/unistd.h> 
#include<errno.h>                                                               
                                                                             
//_syscall0(long, mygetpid)                                                     
                                                                             
int main(int argc, char *argv[])                                                
{                                                                               
     int i = 0;                                                              
     if ( argc != 2) //besides the program name there should be pid          
     {                                                                       
             printf("Pass Process ID as command line argument\n");           
             return 0;                                                       
     }                                                                       
                                                                             
     long pid = atol(argv[1]);                                               
     printf("Process ID: %d\n", syscall(285));                               
     printf(" returned %d\n", syscall(289, pid));                            
     printf("Finished waiting");                                             
     return 0;                                                               
}
