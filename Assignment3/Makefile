PROJECT = transformer

LIBPROJECT = $(PROJECT).a

TESTPROJECT = test-$(PROJECT)

CXX = g++

A = ar

AFLAGS = rsv

CCXFLAGS = -I. -std=c++17 -Wall -g -fPIC

LDXXFLAGS = $(CCXFLAGS) -L. -l:$(LIBPROJECT)

LDGTESTFLAGS = $(LDXXFLAGS) -lgtest -lgtest_main -lpthread

DEPS=$(wildcard *.h)

OBJ=Transformer.o Weapon.o Energy.o Decepticon.o Autobot.o Maximus.o

TEST-OBJ=test-Transformer.o

.PHONY: default

default: all;

%.o: %.cpp $(DEPS)
 $(CXX) -c -o $@ $< $(CCXFLAGS)

$(LIBPROJECT): $(OBJ)
 $(A) $(AFLAGS) $@ $^

$(PROJECT): main.o $(LIBPROJECT)
 $(CXX) -o $@ main.o $(LDXXFLAGS)

$(TESTPROJECT): $(LIBPROJECT) $(TEST-OBJ)
 $(CXX) -o $@ $(TEST-OBJ) $(LDGTESTFLAGS)

test: $(TESTPROJECT)

all: $(PROJECT)

.PHONY: clean

clean:
 rm -f *.o

cleanall: clean
 rm -f $(PROJECT)
 rm -f $(LIBPROJECT)
 rm -f $(TESTPROJECT)
