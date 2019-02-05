Target = prog1

SRC = src
INC = inc
BIN = bin

SOURCE = $(wildcard $(SRC)/*.cc)
OBJ = $(patsubst %,$(BIN)/%, $(notdir $(SOURCE:.cc=.o)))

CC = g++
CFLAGS = -Wall -I$(INC)

$(BIN)/$(Target) : $(OBJ)
	$(CC) -o $@ $^

$(BIN)/%.o : $(SRC)/%.cc
	$(CC) $(CFLAGS) -c $< -o $@

help:
	@echo "src: $(SOURCE)"
	@echo "obj: $(OBJ)"
