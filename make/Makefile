CC=gcc
CFLAGS=-g -std=c11 -pedantic -Wall

SRC=src
OBJ=obj
SRCS=$(wildcard $(SRC)/*.c)
OBJS=$(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SRCS))

BINDIR=bin
BIN=$(BINDIR)/myapp

TEST=test
TESTS=$(wildcard $(TEST)/*.c)
TESTBINS=$(patsubst $(TEST)/%.c, $(TEST)/bin/%, $(TESTS))

all: $(BIN)

release: CFLAGS=-Werror -DNDEBUG -O2
release: clean
release: $(BIN)

$(BIN): $(OBJS)
  $(CC) $(CFLAGS) $(OBJS) -o $@

$(OBJ)/%.o: $(SRC)/%.c
  $(CC) $(CFLAGS) -c $< -o $@

$(TEST)/bin/%: $(TEST)/%.c
  $(CC) $(CFLAGS) $< $(OBJS) -o $@ -lcriterion

$(TEST)/bin:
  mkdir $@

$(OBJ):
  mkdir $@

$(BIN):
  mkdir $@

test: $(BIN) $(TEST)/bin $(TESTBINS)
  for test in $(TESTBINS) ; do ./$$test ; done

clean:
  $(RM) -r $(BINDIR)/* $(OBJ)/*
