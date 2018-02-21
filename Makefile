CC=g++
CFLAGS=-Wall -std=c++11 -O3
OBJECTS=main.o units/unit.o units/centimeter.o units/inch.o
TARGET=run

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) $(CFLAGS) -o $(TARGET)

%.o: %.cpp
	$(CC) $< $(CFLAGS) -c -o $@

clean:
	rm -rf $(TARGET) $(OBJECTS)