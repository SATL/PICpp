CC = g++
CFLAGS = -g
all: TestComposer TestDatabase

Composer.o: Composer.h Composer.cpp
	$(CC) $(CFLAGS) -c Composer.cpp

test_composer.o: test_composer.cpp
	$(CC) $(CFLAGS) -c test_composer.cpp

TestComposer: Composer.o test_composer.o
	$(CC) $(CFLAGS) Composer.o test_composer.o -o TestComposer

Database.o: Database.h Database.cpp
	$(CC) $(CFLAGS) -c Database.cpp

test_database.o: Database.o
	$(CC) $(CFLAGS) -c test_database.o

TestDatabase:
	$(CC) Composer.o Database.o test_database.o -o TestDatabase

clean:
	rm -f core *.o *~ TestComposer