CC = gcc
CFLAGS = -Wall -g
LIBS = -lm -lcunit

# ==== Directories ====
SRC_DIR   = .
CODE_DIR  = demo
TEST_DIR  = tests_demo
OBJ_DIR   = obj
BIN_DIR   = bin
TEST_BIN_DIR = test_bin

# Auto-generate include flags
CFLAGS += $(addprefix -I, $(SRC_DIR) $(CODE_DIR) $(TEST_DIR))

# ==== Source files ====
MAIN_SRCS  = $(wildcard $(SRC_DIR)/*.c) $(wildcard $(CODE_DIR)/*.c)
MAIN_OBJS  = $(patsubst %.c,$(OBJ_DIR)/%.o,$(MAIN_SRCS))
MAIN_EXEC  = $(BIN_DIR)/executable

TEST_SRCS  = $(wildcard $(TEST_DIR)/*.c) $(wildcard $(CODE_DIR)/*.c)
TEST_OBJS  = $(patsubst %.c,$(OBJ_DIR)/%.o,$(TEST_SRCS))
TEST_EXEC  = $(TEST_BIN_DIR)/run_tests

# ==== Default target ====
all: $(MAIN_EXEC)

# ==== Build main executable ====
$(MAIN_EXEC): $(MAIN_OBJS) | $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)

# ==== Build test executable ====
tests: $(TEST_EXEC)

$(TEST_EXEC): $(TEST_OBJS) | $(TEST_BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)

# ==== Object file rule ====
$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	@mkdir -p $(dir $@)   # auto-create subdirs under obj/
	$(CC) $(CFLAGS) -c -o $@ $<

# ==== Run targets ====
run: $(MAIN_EXEC)
	./$(MAIN_EXEC)

run_tests: $(TEST_EXEC)
	./$(TEST_EXEC)

# ==== Housekeeping ====
clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR) $(TEST_BIN_DIR)

rebuild: clean all

# ==== Ensure bin dirs exist ====
$(BIN_DIR) $(TEST_BIN_DIR) $(OBJ_DIR):
	mkdir -p $@
