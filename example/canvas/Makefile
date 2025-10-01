CFLAGS = -Wall -std=c++17 -fPIC -I../../src -L../../lib -lkoolos

SRC_FILES = $(wildcard ./*.cpp)
OBJ_FILES = $(wildcard ./*.o)

EXEC = exe

.PHONY: all clean

all: $(EXEC) $(CLEAN)

clean: $(CLEAN)
	rm -f $^ ./exe

$(EXEC): $(SRC_FILES)
	$(CXX) $^ $(CFLAGS) -o $@

$(CLEAN): $(OBJ_FILES)
	rm -f $^

