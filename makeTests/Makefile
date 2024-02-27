######################################################################
# @author      : Justin Kachele (justin@kachele.com)
# @file        : Makefile
# @created     : Monday Feb 26, 2024 13:43:29 EST
######################################################################

CC = gcc
CFLAGS = -g

SRC = bla.c
OBJ = $(SRC:.c=.o)
BIN = bin

.PHONY: all clean

all: dirs bla

dirs:
	@mkdir -p ./$(BIN)

run: all
	@$(BIN)/bla

bla: $(OBJ)
	@$(CC) -o $(BIN)/bla $^ $(LDFLAGS)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	@rm -f bla bla.o
