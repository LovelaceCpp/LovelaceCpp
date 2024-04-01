EXE  = intro
OBJS = main.o intro.o png.o rgbapixel.o

COMPILER  = g++
COMPILER_OPTS = -c -g -O0 -Wall -Werror
LINKER = g++
LINKER_OPTS = -lpng

RGBDIR = RGB/

intro : $(EXE)

$(EXE): $(OBJS)
	$(LINKER) $(OBJS) $(LINKER_OPTS) -o $(EXE)

main.o : main.cpp 
	$(COMPILER) $(COMPILER_OPTS) main.cpp

intro.o: intro.h intro.cpp
	$(COMPILER) $(COMPILER_OPTS) intro.cpp

png.o : $(RGBDIR)/ png.h png.cpp
	$(COMPILER) $(COPILER_OPTS) png.cpp

rgbapixel.o : $(RGBDIR)/ rgbapixel.h rgbapoxel.hpp
	$(COMPILER) $(COMPILER_OPTS) rgbapixel.cpp

clean : 
	rm -f $(RGBDIR)/*o
	rm -f *.o $(EXE)
      	
