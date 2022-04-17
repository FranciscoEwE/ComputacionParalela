GCC = gcc 
FLAGS = -pedantic 
CFLAGS = -fopenmp -pthread

PROGS: MM1cOMP MM1f MMPosixc


MM1cOMP:
	$(GCC) $(FLAGS) modulo.c -c $(CFLAGS)
	$(GCC) $(FLAGS) $@.c -c $(CFLAGS)
	$(GCC) $(FLAGS) modulo.o $@.o -o ejecutable_$@ $(CFLAGS)
	
MM1f:
	$(GCC) $(FLAGS) modulo.c -c
	$(GCC) $(FLAGS) $@.c -c 
	$(GCC) $(FLAGS) modulo.o $@.o -o ejecutable_$@

MMPosixc:
	$(GCC) $(FLAGS) modulo.c -c $(CFLAGS)
	$(GCC) $(FLAGS) $@.c -c $(CFLAGS)
	$(GCC) $(FLAGS) modulo.o $@.o -o ejecutable_$@ $(CFLAGS)

clean:
	$(RM) $(PROGS) *.o

	
