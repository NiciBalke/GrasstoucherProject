CC = gcc
CFLAGS = -Wall -g
LIBS = -lcunit

# Relative paths
CODE_DIR = ../demo
CODE_SRCS = $(CODE_DIR)/SmallestMissingInt.c
CODE_HDRS = $(CODE_DIR)/SmallestMissingInt.h

TEST_SRCS = testMain.c
EXEC = test_bin/run_tests

all: $(EXEC)

$(EXEC): $(TEST_SRCS) $(CODE_SRCS) $(CODE_HDRS)
	$(CC) $(CFLAGS) -o $(EXEC) $(TEST_SRCS) $(CODE_SRCS) $(LIBS)

clean:
	rm -f $(EXEC) *.o

run: $(EXEC)
	./$(EXEC)

rebuild: clean all