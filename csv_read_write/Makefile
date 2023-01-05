INCLUDE = \
	-I../include/ \
	
BASE_DIR = ./csv_read_write
SOURCES = \
	csv_readwrite.cpp\

OBJS = $(SOURCES:.cpp=.o)

TARGET = ./../csv_readwrite.so

CC=g++

CFLAGS = -g -w -O2 -Wno-unknown-pragmas -fPIC -std=gnu++11

	
.SUFFIXES: .cpp .o

all:$(TARGET)

$(TARGET):
	$(CC) $(CFLAGS) $(INCLUDE) $(SOURCES) $(LINK_PATH) $(LINK_OBJ) -o $(TARGET) -shared

.cpp.o:
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(TARGET) : $(OBJS)

.PHONY: clean
clean:
	$(RM) $(OBJS)


