EXE  = intro
OBJS = main.o intro.o  rgbapixel.o  png.o 
COMPILER  = g++
COMPILER_OPTS = -c -g -O0 -Wall -Werror
LINKER = g++
LINKER_OPTS = -lpng

RGBDIR = RGB

intro : $(EXE)

$(EXE): $(OBJS)
	$(LINKER) $(OBJS) $(LINKER_OPTS) -o $(EXE)

main.o : main.cpp intro.h $(RGBDIR)/png.h
	$(COMPILER) $(COMPILER_OPTS) main.cpp


intro.o: intro.h intro.cpp $(RGBDIR)/png.h $(RGBDIR)/rgbapixel.h
	$(COMPILER) $(COMPILER_OPTS) intro.cpp


png.o : RGB/png.cpp RGB/png.h RGB/rgbapixel.h
	$(COMPILER) $(COMPILER_OPTS) RGB/png.cpp

rgbapixel.o : RGB/rgbapixel.cpp RGB/rgbapixel.h
	$(COMPILER) $(COMPILER_OPTS) RGB/rgbapixel.cpp


clean : 
	rm -f *.o $(EXE)
      	
