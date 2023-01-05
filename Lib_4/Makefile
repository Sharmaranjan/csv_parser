INCLUDE = \
	-I../include/ \
	
LINK_PATH = \
 	-L ./Lib_4\


SOURCES = \
	Lib_4.c \
	
OBJS = $(SOURCES:.c=.o)

TARGET = ./../Lib_2/liblib4.a

# 定義済みマクロの再定義
CC = gcc
CFLAGS = -g -w -O2 -Wno-unknown-pragmas -fPIC

# サフィックスルール適用対象の拡張子の定義
.SUFFIXES: .c .o
.c.o:
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@ -w

$(TARGET): $(OBJS)
	ar rcs $@ $(OBJS)

all:$(TARGET)

# $(TARGET):
	# $(CC) $(CFLAGS) $(INCLUDE) $(SOURCES) $(LINK_PATH) $(LINK_OBJ) -o $(TARGET)

# .c.o:
	# $(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

# $(TARGET) : $(OBJS)

.PHONY: clean
clean:
	$(RM) $(OBJS)


