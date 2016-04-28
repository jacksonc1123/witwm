# Makefile for wm
# Cameron Jackson

SHELL = /bin/sh
CC = gcc
CFLAGS = -g
ALL_CFLAGS = -lconfig -Wall -Wextra
.SUFFIXES: .c .o

OBJ = witwm.o

witwm : $(OBJ)
	$(CC) -o witwm $(OBJ) $(CFLAGS) $(ALL_CFLAGS)

witwm.o : witwm.c

clean :
	rm witwm $(OBJ)
