CC= g++
CFLAGS = -g -Wall 
TARGET = miprograma
MAIN = main

all: $(TARGET)

$(TARGET) : main.o movil.o vector3d.o
	$(CC) -g vector3d.o movil.o main.o -o $(TARGET)

main.o : main.cpp
	$(CC) $(CFLAGS) -c main.cpp

vector3d.o : vector3d.cpp vector3d.h
	$(CC) $(CFLAGS) -c vector3d.cpp

movil.o : movil.cpp movil.h 
	$(CC) $(CFLAGS) -c movil.cpp



clean:
	rm -rf *.o *~
	rm $(TARGET)


