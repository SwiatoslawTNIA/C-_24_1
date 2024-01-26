CPP := g++
CXXFLAGS := -Wall -Wextra 
#Link the files:
run: cpp
	./cpp


cpp: cpp.o
cpp.o: cpp.cpp

%: %.o
	$(CPP) $< -o $@

%.o: %.cpp 
	$(CPP) $(CXXFLAGS) -c $< -o $@

clean: 
	rm -f *.o cpp
