#Dynamic link libarray

DST = test
COM = gcc
SRC = dll_main.c main.c 1.c 2.c 3.c
OBJ = $(SRC:.c=.o)
HEAD= 1.h 2.h 3.h dll_main.h 

FLG = -Wall
DFLG= -Wall -fpic -shared


$(DST) : $(HEAD) $(SRC)  lib1.so lib2.so lib3.so libdll_main.so main.o
	$(COM) $(FLG) -ldl main.o -o $(DST) 

lib1.so: 1.c 1.h
	$(COM) $(DFLG) 1.c -o lib1.so
lib2.so: 2.c 2.h
	$(COM) $(DFLG) 2.c -o lib2.so
lib3.so: 3.c 3.h
	$(COM) $(DFLG) 3.c -o lib3.so
libdll_main.so: dll_main.c dll_main.h
	$(COM) $(DFLG) -ldl dll_main.c -o libdll_main.so

main.o: main.c
	$(COM) $(FLG) -c main.c -o main.o

clean:
	rm  -rf *.so *.o $(DST) 

