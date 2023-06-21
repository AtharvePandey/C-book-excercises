SRCDIR := /Users/atharve/Desktop/C-book-excercises/src
OBJDIR := /Users/atharve/Desktop/C-book-excercises/obj

SOURCES := $(shell find $(SRCDIR) -name "*.c")
OBJECTS := $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SOURCES))
EXECUTABLES := $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%, $(SOURCES))

CFLAGS := -O2

.PHONY: all clean

all: $(EXECUTABLES)

$(OBJDIR)/%: $(OBJDIR)/%.o
	$(CC) $(CFLAGS) $< -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLES)