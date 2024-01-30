CPP := g++
CXXFLAGS := -Wall -Wextra -Wpedantic 
#Link the files:
run: c
	valgrind ./c


c: c.o
c.o: c.cpp
# c1.o: c1.cc
# cpp.o: cpp.cpp

%: %.o
	$(CPP) $< -o $@

%.o: %.cpp 
	$(CPP) $(CXXFLAGS) -c $< -o $@

clean: 
	rm -f *.o cpp
