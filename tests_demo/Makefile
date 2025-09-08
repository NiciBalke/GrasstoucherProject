CC = gcc
CFLAGS = -Wall -g
LIBS = -lcunit

# Relative paths for test env
CODE_DIR = ../demo
CODE_SRCS = $(CODE_DIR)/SmallestMissingInt.c
CODE_HDRS = $(CODE_DIR)/SmallestMissingInt.h

TEST_SRCS = testMain.c
EXEC = test_bin/run_tests

tests: $(EXEC)

$(EXEC): $(TEST_SRCS) $(CODE_SRCS) $(CODE_HDRS) | test_bin
	$(CC) $(CFLAGS) -o $(EXEC) $(TEST_SRCS) $(CODE_SRCS) $(LIBS)

clean_tests:
	rm -f $(EXEC) *.o

test_bin:
	mkdir -p test_bin


run_tests: $(EXEC)
	./$(EXEC)

rebuild: clean tests
