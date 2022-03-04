main : main.c
	gcc -o main main.c -I../include/ -L../lib/ -lsplitline

lib : main.c
	gcc -shared -fPIC -o libsplitline.so splitline.c

