CC = gcc
CFLAGS = -Wall -Wextra

all: mainApp

mainApp: main.o menu.o planet.o
	$(CC) main.o menu.o planet.o -o ./output/mainApp

main.o: main.c menu.h
	$(CC) $(CFLAGS) -c main.c

menu.o: menu.c menu.h planet.h
	$(CC) $(CFLAGS) -c menu.c

planet.o: planet.c planet.h
	$(CC) $(CFLAGS) -c planet.c

clean:
	rm -f *.o mainApp