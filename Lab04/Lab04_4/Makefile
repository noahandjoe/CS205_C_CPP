CXX=g++
TARGET=main
OBJ=main.o fib.o
CXXFLAGS=-c -Wall

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $<

.PHONY: clean
clean:
	rm -f *.o $(TARGET)

