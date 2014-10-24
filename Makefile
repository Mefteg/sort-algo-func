.PHONY: clean, libraries, mrproper

CC = gcc
CFLAGS = -W -Wall

prefix = .
bindir = $(prefix)/bin
libdir = $(prefix)/lib
includedir = $(prefix)/include
srcdir = $(prefix)/src
tmpdir = $(prefix)/tmp

### COMPILATION ###

#-- MAIN

main: tmp main.o
	$(CC) $(tmpdir)/main.o -L$(libdir) -o $(bindir)/main

main.o:
	$(CC) -c $(srcdir)/main.c -I $(includedir) -o $(tmpdir)/main.o $(CFLAGS)

#-- TMP DIRECTORY
tmp:
	mkdir tmp

### PHONY ###

clean:
	rm -rf *.o

clean-libraries:
	rm -rf $(libdir)/*.a

mrproper: clean clean-libraries
	rm -rf $(bindir)/main