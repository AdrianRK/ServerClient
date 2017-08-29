####################################################################################################
#                                     Make file Server Client appl                                 #
####################################################################################################
SUBDIRS:= src

TOPDIR:= $(shell pwd)/
include Makefile.mk

all: clean
	for dir in $(SUBDIRS); do \
		(cd $$dir; make all)\
	done  

install: all
	for dir in $(SUBDIRS); do \
		(cd $$dir; make install)\
	done  


clean:
	for dir in $(SUBDIRS); do \
		(cd $$dir; make clean)\
	done  
	rm -rf $(INSTALLBIN) $(INSTALLLIB)
	mkdir -p $(INSTALLBIN) 
	mkdir -p $(INSTALLLIB)
