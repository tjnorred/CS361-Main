CC = gcc
CFLAGS = -Wall -Wextra -g

# Directories
BUILD_DIR = ./build
BIN_DIR = ./bin
SRC_DIR = ./src
INCLUDE_DIR = ./include
TEST_DIR = ./test

TARGET = $(BIN_DIR)/mainApp
TEST_TARGET = $(BIN_DIR)/testCalc

all: $(TARGET) $(TEST_TARGET)

$(TARGET): $(BUILD_DIR)/main.o $(BUILD_DIR)/menu.o $(BUILD_DIR)/planet.o $(BUILD_DIR)/moon.o
	$(CC) $(BUILD_DIR)/main.o $(BUILD_DIR)/menu.o $(BUILD_DIR)/planet.o $(BUILD_DIR)/moon.o -o $(TARGET)

$(BUILD_DIR)/main.o: $(SRC_DIR)/main.c $(INCLUDE_DIR)/menu.h
	$(CC) $(CFLAGS) -c $(SRC_DIR)/main.c -o $(BUILD_DIR)/main.o

$(BUILD_DIR)/menu.o: $(SRC_DIR)/menu.c $(INCLUDE_DIR)/menu.h $(INCLUDE_DIR)/planet.h $(INCLUDE_DIR)/moon.h
	$(CC) $(CFLAGS) -c $(SRC_DIR)/menu.c -o $(BUILD_DIR)/menu.o

$(BUILD_DIR)/planet.o: $(SRC_DIR)/planet.c $(INCLUDE_DIR)/planet.h
	$(CC) $(CFLAGS) -c $(SRC_DIR)/planet.c -o $(BUILD_DIR)/planet.o

$(BUILD_DIR)/moon.o: $(SRC_DIR)/moon.c $(INCLUDE_DIR)/moon.h
	$(CC) $(CFLAGS) -c $(SRC_DIR)/moon.c -o $(BUILD_DIR)/moon.o

$(TEST_TARGET): $(BUILD_DIR)/calculatorTests.o $(BUILD_DIR)/menu.o
	$(CC) $(BUILD_DIR)/calculatorTests.o $(BUILD_DIR)/menu.o -o $(TEST_TARGET) -lcunit

$(BUILD_DIR)/calculatorTests.o: $(TEST_DIR)/calculatorTests.c
	$(CC) $(CFLAGS) -c $(TEST_DIR)/calculatorTests.c -o $(BUILD_DIR)/calculatorTests.o

clean:
	rm -f $(BUILD_DIR)/*.o

.PHONY: all clean