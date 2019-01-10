CC=g++
RM=rm -rf

SOURCES=main.cpp
EXECUTABLE=FactorialCalc

all: factorial_calc

factorial_calc: main.o

main.o:
	$(CC) $(SOURCES) -o $(EXECUTABLE)

clean:
	$(RM) $(EXECUTABLE)
