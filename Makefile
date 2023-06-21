# #this makefile is for the entire project
# #define src to be the main directory
# SRCDIR = src

# #added wild card declaration

# SRC = $(wildcard $(SRCDIR)/*.c)
# PGMS = hello
# CFLAGS = -O2
# all: $(PGMS)
# .PHONY: all

# hello: $(OBJ)
# 	$(CC) $(CFLAGS) $(OBJ) -o $@

SRC = $(wildcard *.c)
OBJ = $(patsubst %.c,%.o,$(SRC))
CFLAGS = -O2

main: $(OBJ)

$(OBJ): %.o: %.c



