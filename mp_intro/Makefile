EXE=intro 
OBJS = main.o intro.o rgbapixel.o png.o 
CXX = g++ 
CXXFLAGS = -c -g -O0 -Wall -Werror
LD = g++
LDFLAGS= -lpng 

SRC = RGB

intro : $(EXE)

$(EXE) : $(OBJS)
	$(LD) $(OBJS) $(LDFLAGS) -o $(EXE) 
	
main.o : main.cpp intro.h $(SRC)/png.h
	$(CXX) $(CXXFLAGS) main.cpp

intro.o : intro.cpp intro.h $(SRC)/png.h $(SRC)/rgbapixel.h
	$(CXX) $(CXXFLAGS) intro.cpp

png.o : $(SRC)/png.cpp $(SRC)/png.h $(SRC)/rgbapixel.h
	$(CXX) $(CXXFLAGS) RGB/png.cpp


rgbapixel.o : $(SRC)/rgbapixel.cpp $(SRC)/rgbapixel.h
	$(CXX) $(CXXFLAGS) $(SRC)/rgbapixel.cpp

clean :
	rm *.o  intro 

