CC = g++
FILE ?= sum
CFLAGS = --std=c++11

all: executable
	@echo '>>> Building all'

executable:
	@echo '>>> Building executable.'
	$(CC) $(CFLAGS) $(FILE).cpp -o $(FILE)

clean:
	rm -rfv *.o *.i *.s

.PHONY: clean
