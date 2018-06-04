CXX = g++
CXXFLAGS = -std=c++11
RM = rm -f
OBJS = *.o
SILENT = @

all:run

main : main.o robot_algos.o
	$(SILENT) $(CXX) $(CXXFLAGS) -o main main.o robot_algos.o
main.o : main.cpp robot_algos.hpp
	$(SILENT) $(CXX) $(CXXFLAGS) -c main.cpp
robot_algos.o : robot_algos.cpp robot_algos.hpp
	$(SILENT) $(CXX) $(CXXFLAGS) -c robot_algos.cpp
clean:
	$(SILENT) $(RM) $(OBJS) main
run: main
	$(SILENT) ./main

.PHONY: all run
