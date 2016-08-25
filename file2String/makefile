CC = gcc
DEPS = 
OBJ = file2string.c custout.c

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

run:
	./main

.PHONY: clean
clean:
	rm -f *.o *~ main