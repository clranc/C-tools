# Chris Ranc
# February 24, 2018
#
# Modified from Fernando Luiz Cola's make file for
# building project for K64 microcontroller to be
# reused for other c/c++ projects in linux


#Toolchain and Path Configuration
PREFIX=
CC=$(PREFIX)g++
LD=$(PREFIX)g++
DB=$(PREFIX)gdb
AS=$(PREFIX)as
OBJCOPY=$(PREFIX)objcopy
SIZE=$(PREFIX)size
RM=rm -f

#Files Location
SRC=$(wildcard *.cpp)
OBJ=$(patsubst  %.cpp, %.o, $(SRC) )
ASSRC=$(wildcard *.S)
ASOBJ=$(patsubst  %.S, %.o, $(ASSRC) )

#GNU ARM GCC Configuration and Platform configurations
ARCHFLAGS=
INCLUDE=-I./includes/
CFLAGS=-lpthread
LDFLAGS=

#Output file
TARGET=main

#Makefile rules
all: build bin size
build: bin
builds: assem
bin: $(TARGET).bin
assem: $(TARGET).s

clean:
	$(RM) $(TARGET).bin $(TARGET).srec $(TARGET).map $(OBJ) $(ASOBJ)

#Compiling each source file
%.o: %.cpp 
	$(CC) -c $(ARCHFLAGS) $(CFLAGS) $(INCLUDE) -o $@ $<

%.s: %.cpp
	$(CC) -c $(ARCHFLAGS) $(CFLAGS) $(INCLUDE) -S -o $@ $<

#Linking project
$(TARGET).bin: $(OBJ) $(ASOBJ)
	@echo '### Linking files ###'
	$(LD) $(LDFLAGS) $(CFLAGS) $(OBJ) $(ASOBJ) -o $@

#Print binary size
size:
	@echo "---- RAM/Flash Usage ----"
	$(SIZE) $(TARGET).bin

