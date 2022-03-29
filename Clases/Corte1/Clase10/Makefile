GCC = gcc
FLAGS = -pedantic -Wall
CFLAGS= -lm -pthread
PROGS = main main2 MMposix

main:
	$(GCC) $(FLAGS) funciones.c -c
	$(GCC) $(FLAGS) $@.c -c
	$(GCC) $(FLAGS) $@.o funciones.o -o $@

main2:
	$(GCC) $(FLAGS) funciones.c -c
	$(GCC) $(FLAGS) $@.c -c
	$(GCC) $(FLAGS) $@.o funciones.o -o $@
MMposix:
	$(GCC) $(FLAGS) funciones.c -c $(CFLAGS)
	$(GCC) $(FLAGS) $@.c -c $(CFLAGS)
	$(GCC) $(FLAGS) $@.o funciones.o -o $@

clean:
	$(RM) $(PROGS) *.o

