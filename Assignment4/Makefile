PROJECT = transformer

LIBPROJECT = $(PROJECT).a

TESTPROJECT = test-$(PROJECT)

CXX = g++

A = ar

AFLAGS = rsv

CCXFLAGS = -I. -I/usr/include/gtest -I/usr/include -std=c++17 -Wall -Werror -Wpedantic -g -fPIC

LDXXFLAGS = $(CCXFLAGS) -L. 

LDGTESTFLAGS = $(LDXXFLAGS) -L/usr/lib -lgtest -lgtest_main -lpthread

DEPS=$(wildcard *.h)

OBJ=Transformer.o Weapon.o Energy.o Decepticon.o Autobot.o Maximus.o

TEST_SRC=test.cpp
TEST_OBJ=$(TEST_SRC:.cpp=.o)

.PHONY: default

default: test

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CCXFLAGS)

$(LIBPROJECT): $(OBJ)
	$(A) $(AFLAGS) $@ $^

$(TESTPROJECT): $(LIBPROJECT) $(TEST_OBJ)
	$(CXX) -o $@ $(TEST_OBJ) $(LIBPROJECT) $(LDGTESTFLAGS)

test: $(TESTPROJECT)
	./$(TESTPROJECT)

all: $(LIBPROJECT) $(TESTPROJECT)

.PHONY: clean
clean:
	rm -f *.o

cleanall: clean
	rm -f $(LIBPROJECT)
	rm -f $(TESTPROJECT)
