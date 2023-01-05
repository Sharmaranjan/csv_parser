BASE_DIR = Lib_1
INCLUDE = \
	-I../include/ \
	
SOURCES = \
	./Lib_1.c\

OBJS = $(SOURCES:.c=.o)



CC=gcc

CFLAGS = -g -w -O2 -Wno-unknown-pragmas -fPIC


.SUFFIXES: .c .o
LINK_OBJ = \
	./liblib3.a\
	
TARGET = ./../liblib1.so\

all:$(TARGET)

$(TARGET):
	$(CC) $(CFLAGS) $(INCLUDE) $(SOURCES) $(LINK_PATH) $(LINK_OBJ) -o $(TARGET) -shared

.c.o:
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(TARGET) : $(OBJS)

.PHONY: clean
clean:
	$(RM) $(OBJS)


