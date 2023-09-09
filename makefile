CC=gcc
CFLAGS=-I. -w -g
DEPS = pa1.h
OBJ = pa1.o pattern_checker.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

pattern_finder: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)