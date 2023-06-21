SRCDIR = src
#INCDIR = include
OBJDIR = obj

SRC = $(wildcard $(SRCDIR)/*.c)
#INC = $(wildcard $(INCDIR)/*.h)
OBJ = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SRC))
PGMS = make
CFLAGS = -O2 

all: $(PGMS)

.PHONY: all

hello: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

$(OBJ): $(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)


# Another customary target is distclean (cleaning prior to distributing the
# collected sources).

distclean: clean
	rm -f $(PGMS)


# Indicate that these targets are phony.

.PHONY: clean distclean

