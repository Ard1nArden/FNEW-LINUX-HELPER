CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = src/run.c \
      src/lib/checking_lang.c \
      src/lib/filesystem.c \
      src/lib/full.c \
      src/lib/standart.c

TARGET = fnew

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

.PHONY: all
