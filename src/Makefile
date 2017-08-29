####################################################################################################
#                                     Make file Server Client appl                                 #
####################################################################################################
SOURCES:=	main.cpp\
	CWSocket.cpp
OBJECTS:=$(SOURCES:.cpp=.o)

TOPDIR:= $(shell pwd)/..
include ../Makefile.mk

all: clean $(EXECUTABLE) 

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(LDFLAGS) $(patsubst  %,$(OBJ)/%,$(OBJECTS)) -o $(BIN)/$@ 

.cpp.o:
	$(CXX) $(CFLAGS) $< -o $(OBJ)/$@

clean:
	rm -rf $(BIN)/$(EXECUTABLE) $(OBJ)/$(OBJECTS) $(BIN) $(OBJ) $(OBJECTS)
	mkdir -p $(BIN)
	mkdir -p $(OBJ)


install: all
	cp -a $(BIN)/$(EXECUTABLE) $(INSTALLBIN)/
