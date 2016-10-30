#SHELL
SHELL:=/bin/bash

#VARS
CC=gcc
LD=ld
INC_DIR=
OUT_DIR:=out
C_FLAGS=-I./ -c
LD_FLAGS=

TARGET=harness

#DEFAULT
.DEFAULT:all

.PHONY:all clean help
all: $(TARGET)

.c.o: harness.c testFuncs1.c testFuncs1.h
	@echo 'compiling all source files...'
	if [ -d out ]; then\
		echo 'out directory already exists.skipping...';\
	else\
		mkdir ./out;\
	fi
	$(CC) $(C_FLAGS) $? -o $@

$(TARGET): harness.o testFuncs1.o
	$(CC) $? $(LD_FLAGS) -o $@

clean:
	rm ./out -rf $(wildcard *.o) $(wildcard *.exe) $(TARGET)

help:	
	@echo '		all is the default'
	@echo '		all only compiles. it does not link'
	@echo '		then there is clean'
	@echo '		and obviously help'
	@echo '		allda compiles and links'
	@echo '		link is broken right now'
