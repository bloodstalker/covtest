#VARS
CC=gcc
LD=ld
SRC_FILE1=harness
SRC_FILE2=testFuncs1
INC_DIR=D:\home\devi\covtest
OUT_DIR=D:\home\devi\covtest\output
OPTS=-c
EXE=harness.exe


#DEFAULT
.DEFAULT:all
.PHONY:all
all: 
	@echo 'building target all'
	$(CC) $(SRC_FILE1).c $(OPTS) -I$(INC_DIR) -o$(OUT_DIR)\$(SRC_FILE1).o
	$(CC) $(SRC_FILE1).c $(OPTS) -I$(INC_DIR) -o$(OUT_DIR)\$(SRC_FILE2).o

.PHONY:link
link:
	$(LD) -o harness $(OUT_DIR)\$(SRC_FILE1).o $(OUT_DIR)\$(SRC_FILE2).o

.PHONY:clean
clean:
	rm $(OUT_DIR)\$(EXE)
	rm $(OUT_DIR)\$(SRC_FILE1).o
	rm $(OUT_DIR)\$(SRC_FILE2).o

.PHONY:help
help:	
	@echo '		all is the default'
	@echo '		all only compiles. it does not link'
	@echo '		then there is clean'
	@echo '		and obviously help'
	@echo '		allda compiles and links'
	@echo '		link is broken right now'

.PHONY:allda
allda:
	$(CC) $(SRC_FILE1).c $(SRC_FILE2).c -I$(INC_DIR) -o$(OUT_DIR)\$(EXE)