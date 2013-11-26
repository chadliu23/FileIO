CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cpp FileIO.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=FileIO

all: $(SOURCES) $(EXECUTABLE) 
	
$(EXECUTABLE): $(OBJECTS)  FileIO.h
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJECTS) $(EXECUTABLE)
