C ?= gcc
FILE ?= file

ifeq ($(CC), g++)
CFLAGS = -Wall -Werror -std=c++11
TAIL = cpp
else
CFLAGS = -Wall -Werror -std=c99
TAIL = c
endif

all: executable
	@echo '>>> Building all'


executable:
	@echo '>>> Building executable.'
	$(CC) $(CFLAGS) $(FILE).$(TAIL) -o $(FILE)

clean:
	rm -rfv *.o *.i *.s

.PHONY: clean
