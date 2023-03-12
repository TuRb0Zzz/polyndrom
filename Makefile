all: proga.o
	g++ proga.o
proga.o : proga.c
	g++ -c proga.c