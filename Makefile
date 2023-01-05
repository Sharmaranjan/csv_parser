INCLUDE = \
	-I./include/ \
	
BASE_DIR = ./Linux_code
LINK_PATH = \
	-L./Lib_1\
	-L./Lib_2\
	-L./csv_read_write\

LINK_OBJS = \
	./liblib1.so\
	./liblib2.so\
	./csv_readwrite.so\
	
	
SOURCES = \
	./C_Code.cpp\

OBJS = $(SOURCES:.cpp=.o)

TARGET = C_Code.out
all: $(TARGET)

CC=g++

CFLAGS = -g -Wall -O2 -Wno-unknown-pragmas -fPIC

.SUFFIXES: .cpp .o
.cpp.o:
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@


$(TARGET):
	$(CC) $(CFLAGS) $(INCLUDE) $(SOURCES) $(LINK_PATH) $(LINK_OBJS) -o $(TARGET)


# The rules for cleaning
.PHONY: clean
clean:
	$(RM) $(TARGET) $(OBJS)

