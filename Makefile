################################################################################
#
# Makefile
#
# Builds the isten library
################################################################################
AR      := ar
CC      := gcc
AFLAGS  := rcs
CFLAGS  := -I./include -O3
LDFLAGS := -L./export
LIBNAME := libisten
VPATH   := include:src:test
BUILDDIR:= build
OUTDIR  := export
MKDIR   := mkdir
TESTNAME:= libisten_test

.PHONY: all
all: directories $(LIBNAME).a

.PHONY: test
test: directories $(LIBNAME).a $(TESTNAME).o
	$(CC) $(LDFLAGS) $(CFLAGS) -o $(OUTDIR)/$(TESTNAME) $(BUILDDIR)/$(TESTNAME).o -listen
	$(OUTDIR)/$(TESTNAME)

$(LIBNAME).a: $(LIBNAME).o
	$(AR) $(AFLAGS) $(OUTDIR)/$@ $(BUILDDIR)/$<

%.o: %.c
	$(CC) $(CFLAGS) -c -o $(BUILDDIR)/$@ $?

.PHONY: directories
directories: $(BUILDDIR) $(OUTDIR)

$(BUILDDIR):
	@-$(MKDIR) -p $(BUILDDIR)

$(OUTDIR):
	@-$(MKDIR) -p $(OUTDIR)

.PHONY: clean
clean:
	rm -rf $(BUILDDIR) $(OUTDIR)

