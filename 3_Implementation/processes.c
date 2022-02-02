#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>

extern int read_from_shared_memory (char *mmap_key, char *buffer, unsigned int buff_size, unsigned int bytes_to_read);
extern int create_and_write_shared_memory (char *mmap_key, char *value, int size);
int read_or_write();


int main (int argc, char **argv)
{   

    pid_t p = fork();
    if(p > 0)
    {
        wait(NULL);
        char *parent = malloc(sizeof(char) * 140);
    	printf("Enter the name of the parent:\n");	
        scanf("%s", parent);
    	read_or_write();
    	exit(p);
    }
    else
    {
        char *child = malloc(sizeof(char) * 140);
    	printf("Enter the name of the child:\n");
    	scanf("%s", child);
    	read_or_write();
    	exit(0);
    }
    return 0;
}

int read_or_write()
{
    int num;
    printf("Enter 1 for sending message and 2 for reading message:");
    scanf("%d", &num);
    if(num == 1)
    {
    	char *key = "/common";
    	char *intro = malloc(sizeof(char) * 140);
    	printf("Enter a message:\n");
    	scanf("%s", intro);
    	create_and_write_shared_memory(key, intro, strlen(intro));
    	return 0;
    }
    else if(num == 2)
    {
       char *decide; 
       char *key = "/common";
       char read_buffer[128];
       memset(read_buffer, 0, 128);
       int rc = read_from_shared_memory(key, read_buffer, 128, 128);
       if(rc < 0)
       {
        	printf("Error reading from shared memory\n");
       	return 0;
       }
       printf("%s\n", (char *)read_buffer);
    }   
    else
    {
    	printf("Enter either 1 or 2.");
    }
    return 0;
}
