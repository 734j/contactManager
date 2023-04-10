CC = gcc
CFLAGS = -Wall -Werror -g
SRCS = contactmanager.c addcontact.c usefulfunctions.c
EXEC = contman

all: $(EXEC)

$(EXEC): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(EXEC)

clean:
	rm -f $(EXEC)