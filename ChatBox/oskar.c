#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern int read_from_shared_memory (char *mmap_key, char *buffer, unsigned int buff_size, unsigned int bytes_to_read);
extern int create_and_write_shared_memory (char *mmap_key, char *value, int size);

int main (int argc, char **argv){
    int num;
    printf("Enter 1 for sending message and 2 for reading message:");
    scanf("%d", &num);
    if(num == 1)
    {
    	char *key = "/introduction";
    	char *intro = malloc(sizeof(char) * 140);
    	printf("Enter a message:\n");
    	scanf("%s", intro);
    	create_and_write_shared_memory(key, intro, strlen(intro));
    	return 0;
    }
    else if(num == 2)
    {
       char *key = "/introduction";
       char read_buffer[128];
       memset(read_buffer, 0, 128);
       int rc = read_from_shared_memory(key, read_buffer, 128, 128);
       if(rc < 0)
       {
        	printf("Error reading from shared memory\n");
       	return 0;
       }
    printf("Data read = %s\n", (char *)read_buffer);
    return 0;
    }
}
