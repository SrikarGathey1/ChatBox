gcc -g -c shm_demo.c -o shm_demo.o
gcc -g -c processes.c -o processes.o
gcc -g processes.o shm_demo.o -o ipc -lrt


