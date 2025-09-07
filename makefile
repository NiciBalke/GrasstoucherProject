CC = gcc
CFLAGS = -Wall -g
LIBS = -lm

SRCS = *.c
OBJS = $(SRCS:.c=.o)
EXEC = bin/executable

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)

clean: 
	rm -f $(OBJS) $(EXEC)

rebuild: clean all

run: $(EXEC)
	./$(EXEC)