G=g++
flag=-c

all: nani

nani:  main.o functions.o
	$(G) main.o functions.o -o nani

main.o: main.cpp functions.h
	$(G) $(flag) main.cpp

function.o: functions.cpp functions.h
	$(G) $(flag) functions.cpp


clean:
	rm *.o main
