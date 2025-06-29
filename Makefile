CXXFLAGS = -Wall -std=c++17 -fPIC

SRC_DIR = src
OBJ_DIR = obj
LIB_DIR = lib

STATIC_LIB = $(LIB_DIR)/libkoolos.a
SHARED_LIB = $(LIB_DIR)/libkoolos.so

LIB_SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
LIB_OBJECTS = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(LIB_SOURCES))

# Targets
.PHONY: all clean

all: $(STATIC_LIB)

# Static library target
$(STATIC_LIB): $(LIB_OBJECTS)
	@mkdir -p $(LIB_DIR)
	ar rcs $@ $^

# Compile object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up
clean:
	rm -f $(OBJ_DIR)/*.o 
	rm -rf $(LIB_DIR)

