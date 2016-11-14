# C++ SECTION

# DEBUG_MODE = TRUE

CXX = g++
OUTPUT = gpa-converter

BIN_DIR = ./bin
INC_DIR = ./include
OBJ_DIR = ./obj
SRC_DIR = ./src
DAT_DIR = ./data

OBJS = $(OBJ_DIR)/conversion.o \
	   $(OBJ_DIR)/course.o \
       $(OBJ_DIR)/file.o \
       $(OBJ_DIR)/main.o \
       $(OBJ_DIR)/student.o

INCLUDES += -I$(INC_DIR)

CFLAGS = -Wall -Wextra -ansi -pedantic -std=c++11 $(INCLUDES)

ifdef DEBUG_MODE
	CFLAGS += -g
else
	CFLAGS += -O3
endif

all: directories $(BIN_DIR)/$(OUTPUT)

$(BIN_DIR)/$(OUTPUT): $(OBJS)
	$(CXX) $(OBJS) $(CFLAGS) -o $(BIN_DIR)/$(OUTPUT)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) -c $(CFLAGS) $< -o $@

# FILES SECTION

.PHONY: directories
directories:
	mkdir -p $(OBJ_DIR)
	mkdir -p $(BIN_DIR)

.PHONY: clean
clean:
	-rm $(OBJ_DIR)/*.o $(BIN_DIR)/$(OUTPUT)
