#include<stdio.h>                                                               
#include<linux/unistd.h>                                                        
#include<errno.h>                                                               
                                                     
//_syscall0(long, mygetpid)                                                     
                                                     
int main(int argc, char *argv[])                                                
{                                                                               
	if ( argc != 3) //besides the program name there should be pid          
	{                                                                       
		printf("Pass Process ID as command line argument\n");           
		return 0;                                                       
	}                                                                       
		                                             
	long pid = atol(argv[1]);                                               
	long cpid = atol(argv[2]);                                              
	printf("Victim %d\n", cpid);                                            
	printf("Target: %d\n", pid);                                            
	printf("New time slice: %lu\n", syscall(288, pid, cpid));               
	return 0;                                                               
}
