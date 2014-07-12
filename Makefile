all: smallsleep

.PHONY: all clean clear

CPPFLAGS_SPECIFIC += -Wall -O3
LDFLAGS_SPECIFIC += -Wall -O3
LIBS +=
CC = gcc

DEPS := $(patsubst %.o,%.d,$(OBJS))

clear: clean

clean:
	rm smallsleep

smallsleep: smallsleep.c
	$(CC) -o $@ $^ $(CPPFLAGS_SPECIFIC) $(CPPFLAGS) $(LIBS) $(LDFLAGS) $(LDFLAGS_SPECIFIC)
