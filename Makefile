# Create the executable file and specify its dependencies
prog: Main.o Point.o Rectangle.o
	g++ -std=c++11 -o prog Main.o Point.o Rectangle.o

# Rules for creating object files
Main.o: Main.cpp Point.h Rectangle.h
	g++ -std=c++11 -c Main.cpp

Point.o: Point.cpp Point.h
	g++ -std=c++11 -c Point.cpp

Rectangle.o: Rectangle.cpp Rectangle.h Point.h
	g++ -std=c++11 -c Rectangle.cpp

# Rule to delete/clean object files and executable (Linux/OSX)
clean:
	rm -f Main.o Point.o Rectangle.o
	rm -f prog

# For my Mac
# cd ~/Desktop/ET_580/Project1_Phase3
# make
# ./prog
# make clean