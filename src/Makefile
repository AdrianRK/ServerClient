####################################################################################################
#                                     Make file Server Client appl                                 #
####################################################################################################
CFLAGS:=-c -Wall 
SOURCES:=main.cpp
LDFLAGS:=
OBJECTS:=$(SOURCES:.cpp=.o)
CC:=g++
EXECUTABLE:=appl.app

all: clean $(SOURCES) $(EXECUTABLE) 

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@ 

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(EXECUTABLE) $(OBJECTS)
