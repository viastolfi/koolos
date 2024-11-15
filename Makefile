CXXFLAGS = -Wall -std=c++11 -fPIC

SRC_DIR = src
LIB_DIR = lib

STATIC_LIB = $(LIB_DIR)/libkoolos.a
SHARED_LIB = $(LIB_DIR)/libkoolos.so

LIB_SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
LIB_OBJECTS = $(LIB_SOURCES:.cpp=.o)
	
# Targets
.PHONY: all clean

all: $(STATIC_LIB)

# Static library target
$(STATIC_LIB): $(LIB_OBJECTS)
	@mkdir -p $(LIB_DIR)
	ar rcs $@ $^
	
# Compile object files
$(SRC_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
	
# Clean up
clean:
	rm -f $(SRC_DIR)/*.o 
	rm -rf $(LIB_DIR)

