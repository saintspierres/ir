#
#  Makefile
#  
#
#  Created by Eric Bremond on 12/10/11.
#  Copyright 2011 huckel.c. All rights reserved.
#
#

CC = gcc
CFLAGS = -I include
LDFLAG =

SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)

EXE = bin/ir

all: $(EXE)

$(EXE): $(OBJ)
	$(CC) $(LDFLAG) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

.PHONY: clean distclean

clean: $(OBJ)
	@rm -f $^

distclean: bin/ir clean
	@rm -f $<
