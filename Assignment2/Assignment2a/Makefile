PROJECT = as2a

CXX = g++

CCXFLAGS = -I. -std=c++17 -Wall -Werror -Wpedantic

DEPS = $(wildcard *.h)

OBJ = $(PROJECT).o

.PHONY: default

default: $(PROJECT)

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CCXFLAGS)

$(PROJECT): $(OBJ)
	$(CXX) -o $@ $^ $(CCXFLAGS)

run: $(PROJECT)
	./$(PROJECT)

clean:
	rm -f *.o $(PROJECT)
	
cleanall:
	rm -f *.o $(PROJECT)
