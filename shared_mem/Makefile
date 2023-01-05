CC = g++
CFLAGS = -g -Wall -O2 -Wno-unknown-pragmas -fPIC

SOURCES =\
	  shared_mem.cpp\

LINK_PATH = \
	-L./ \

EX_FLAG = 0

MAKE_FLAGS = --no-print-directory --silent


OBJS = $(SOURCES:.cpp=.o)

TARGET = ./../libshared_mem.so\

all: $(TARGET)

$(TARGET):
	$(CC) $(CFLAGS) $(INCLUDE) $(SOURCES) $(LINK_PATH) -o $(TARGET) -shared

# TtBbNX[
.c.o:
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@
.cpp.o:
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@


.PHONY: clean
clean:
	$(RM) $(TARGET) $(OBJS)


