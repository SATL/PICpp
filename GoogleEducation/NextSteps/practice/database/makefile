CC = g++
CFLAGS = -g
all: TestComposer

Composer.o: Composer.h Composer.cpp
	$(CC) $(CFLAGS) -c Composer.cpp

test_composer.o: test_composer.cpp
	$(CC) $(CFLAGS) -c test_composer.cpp

TestComposer: Composer.o test_composer.o
	$(CC) $(CFLAGS) Composer.o test_composer.o -o TestComposer

clean:
	rm -f core *.o *~ TestComposer