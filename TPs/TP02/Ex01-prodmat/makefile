# Makefile 

OPTOMP =  -fopenmp # option de compilation openmp
OPTSEQ = 
EXELIST = prodmatomp prodmatseq
CC = gcc


all : prodmatomp prodmatseq
prodmatomp : prodmat.c
	  $(CC) $(OPTOMP) prodmat.c -o $@

prodmatseq : prodmat.c
	  $(CC) $(OPTSEQ) prodmat.c -o $@

clean :
	rm -f core.* $(EXELIST)
