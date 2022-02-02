gcc -g -c shm_demo.c -o shm_demo.o
gcc -g -c otto.c -o otto.o
gcc -g -c oskar.c -o oskar.o
gcc -g oskar.o shm_demo.o -o oskar -lrt
gcc -g otto.o shm_demo.o -o otto -lrt                                    
