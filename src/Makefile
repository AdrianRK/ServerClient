####################################################################################################
#                                     Make file Server Client appl                                 #
####################################################################################################
SOURCES:=main.cpp
OBJECTS:=$(SOURCES:.cpp=.o)

TOPDIR:= $(shell pwd)/..
include ../Makefile.mk

all: clean $(SOURCES) $(EXECUTABLE) 

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(LDFLAGS) $(OBJ)/$(OBJECTS) -o $(BIN)/$@ 

.cpp.o:
	$(CXX) $(CFLAGS) $< -o $(OBJ)/$@

clean:
	rm -rf $(BIN)/$(EXECUTABLE) $(OBJ)/$(OBJECTS) $(BIN) $(OBJ) $(OBJECTS)
	mkdir -p $(BIN)
	mkdir -p $(OBJ)


install: all
	cp -a $(BIN)/$(EXECUTABLE) $(INSTALLBIN)/
