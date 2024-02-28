######################################################################
# @author      : Justin Kachele (justin@kachele.com)
# @file        : Makefile
# @created     : Monday Feb 26, 2024 13:43:29 EST
######################################################################

CC = gcc
CFLAGS = -g

SRC = src/2023/Day1/Day1a.c
OBJ = $(SRC:.c=.o)
BIN = bin

.PHONY: all build dirs clean

all: dirs out

build: all

dirs:
	mkdir -p ./$(BIN)

run: all
	$(BIN)/out

out: $(OBJ)
	$(CC) -o $(BIN)/out $^ $(LDFLAGS)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -rf bin/

