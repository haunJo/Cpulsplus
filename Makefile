clean:
	find . -type f -executable -delete

TARGET = 

CC = g++

CFLAGS = -Wall -std=C++11

$(TARGET): $(TARGET).cpp
	$(CC) $(CFLAGS) $(TARGET).cpp -o $(TARGET)

