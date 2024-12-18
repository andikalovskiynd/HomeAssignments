PROJECT = rpn

LIBPROJECT = lib$(PROJECT).a

TESTPROJECT = test-$(PROJECT)

CXX = g++

A = ar

AFLAGS = rsv

CCXFLAGS = -I. -std=c++17 -Wall -Werror -Wpedantic

LDXXFLAGS = $(CCXFLAGS) -L.

DEPS = rpn.h stack.h

OBJ = rpn.o stack.o

TEST_SRC = main.cpp
TEST_OBJ = $(TEST_SRC:.cpp=.o)

.PHONY: default

default: test

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CCXFLAGS)

$(LIBPROJECT): $(OBJ)
	$(A) $(AFLAGS) $@ $^

$(TESTPROJECT): $(LIBPROJECT) $(TEST_OBJ)
	$(CXX) -o $@ $(TEST_OBJ) $(LIBPROJECT) $(LDXXFLAGS)

test: $(TESTPROJECT)
	./$(TESTPROJECT)

all: $(LIBPROJECT) $(TESTPROJECT)

.PHONY: clean
clean:
	rm -f *.o

cleanall: clean
	rm -f $(LIBPROJECT)
	rm -f $(TESTPROJECT)