# This is a simple makefile. It simply compiles main.cpp

# C++ compiler
CC = g++

TARGET = main

# Compile with all errors and warnings
CFLAGS = -c -Wall

# To make the executable we need main.o
$(TARGET): main.o
	$(CC) main.o -o $(TARGET)

# To make main.o we need main.cpp
main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp
