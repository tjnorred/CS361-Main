CC = gcc
CFLAGS = -Wall -Wextra -g

# Directories
BUILD_DIR = ./build
BIN_DIR = ./bin
SRC_DIR = ./src
INCLUDE_DIR = ./include

TARGET = $(BIN_DIR)/mainApp

all: $(TARGET)

$(TARGET): $(BUILD_DIR)/main.o $(BUILD_DIR)/menu.o $(BUILD_DIR)/planet.o
	$(CC) $(BUILD_DIR)/main.o $(BUILD_DIR)/menu.o $(BUILD_DIR)/planet.o -o $(TARGET)

$(BUILD_DIR)/main.o: $(SRC_DIR)/main.c $(INCLUDE_DIR)/menu.h
	$(CC) $(CFLAGS) -c $(SRC_DIR)/main.c -o $(BUILD_DIR)/main.o

$(BUILD_DIR)/menu.o: $(SRC_DIR)/menu.c $(INCLUDE_DIR)/menu.h $(INCLUDE_DIR)/planet.h
	$(CC) $(CFLAGS) -c $(SRC_DIR)/menu.c -o $(BUILD_DIR)/menu.o

$(BUILD_DIR)/planet.o: $(SRC_DIR)/planet.c $(INCLUDE_DIR)/planet.h
	$(CC) $(CFLAGS) -c $(SRC_DIR)/planet.c -o $(BUILD_DIR)/planet.o

clean:
	rm -f $(BUILD_DIR)/*.o
#	rm -rf $(BUILD_DIR)  # Remove the entire build directory

.PHONY: all clean