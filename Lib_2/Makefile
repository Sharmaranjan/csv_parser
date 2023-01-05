INCLUDE = \
	-I../include/ \
	
BASE_DIR = Lib_2
SOURCES = \
	Lib_2.c\

OBJS = $(SOURCES:.c=.o)

TARGET = ./../liblib2.so

CC=gcc

CFLAGS = -g -w -O2 -Wno-unknown-pragmas -fPIC
LINK_OBJ = \
	./liblib4.a
	
.SUFFIXES: .c .o

all:$(TARGET)

$(TARGET):
	$(CC) $(CFLAGS) $(INCLUDE) $(SOURCES) $(LINK_PATH) $(LINK_OBJ) -o $(TARGET) -shared

.c.o:
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(TARGET) : $(OBJS)

.PHONY: clean
clean:
	$(RM) $(OBJS)


