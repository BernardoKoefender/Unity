# ==========================================
#   Unity Project - A Test Framework for C
#   Copyright (c) 2007 Mike Karlesky, Mark VanderVoord, Greg Williams
#   [Released under MIT License. Please refer to license.txt for details]
# ==========================================

#We try to detect the OS we are running on, and adjust commands as needed
ifeq ($(OS),Windows_NT)
  ifeq ($(shell uname -s),) # not in a bash-like shell
	CLEANUP = del /F /Q
	MKDIR = mkdir
  else # in a bash-like shell, like msys
	CLEANUP = rm -f
	MKDIR = mkdir -p
  endif
	TARGET_EXTENSION=.exe
else
	CLEANUP = rm -f
	MKDIR = mkdir -p
	TARGET_EXTENSION=.out
endif

C_COMPILER=gcc
ifeq ($(shell uname -s), Darwin)
C_COMPILER=clang
endif

UNITY_ROOT=../..

CFLAGS=-std=c99
CFLAGS += -g
CFLAGS += -Wall
CFLAGS += -Wfatal-errors
CFLAGS += -Wextra
CFLAGS += -Wpointer-arith
CFLAGS += -Wcast-align
CFLAGS += -Wwrite-strings
CFLAGS += -Wswitch-default
CFLAGS += -Wunreachable-code
CFLAGS += -Winit-self
CFLAGS += -Wmissing-field-initializers
CFLAGS += -Wno-unknown-pragmas
CFLAGS += -Wstrict-prototypes
CFLAGS += -Wundef
CFLAGS += -Wold-style-definition

GCOVFLAGS  = -fprofile-arcs
GCOVFLAGS += -ftest-coverage

CPPCHECKFLAGS  = --enable=all
CPPCHECKFLAGS += --suppress=missingIncludeSystem
CPPCHECKFLAGS += --suppress=unusedFunction

VALGRINDFLAGS  = --leak-check=full
VALGRINDFLAGS += --show-leak-kinds=all

SANITIZERFLAGS  = -g
SANITIZERFLAGS += -Wall
SANITIZERFLAGS += -Wfatal-errors
SANITIZERFLAGS += -fsanitize=address 

TARGET_BASE1=all_tests
TARGET1 = $(TARGET_BASE1)$(TARGET_EXTENSION)
SRC_FILES1=\
  $(UNITY_ROOT)/src/unity.c \
  $(UNITY_ROOT)/extras/fixture/src/unity_fixture.c \
  src/identifier.c \
  test/TestIdentifier.c \
  test/test_runners/TestIdentifier_Runner.c \
  test/test_runners/all_tests.c
INC_DIRS=-Isrc -I$(UNITY_ROOT)/src -I$(UNITY_ROOT)/extras/fixture/src
SYMBOLS=

all: clean cppcheck sanitizer valgrind unity

cppcheck:
	$(info -------------------------- cppcheck)
	cppcheck $(CPPCHECKFLAGS) src/identifier.c

unity:
	$(info -------------------------- unity)
	$(C_COMPILER) $(CFLAGS) $(INC_DIRS) $(SYMBOLS) $(SRC_FILES1) $(GCOVFLAGS) -o all_tests.out && ./all_tests.out -v && gcov -b identifier.gcda

valgrind:
	$(info -------------------------- valgrind)
	gcc -g -Wall -Wfatal-errors src/main.c
	valgrind $(VALGRINDFLAGS) ./a.out

sanitizer:
	$(info -------------------------- sanitizer)
	gcc $(SANITIZERFLAGS) src/main.c && ./a.out

clean:
	$(info -------------------------- clean)
	$(CLEANUP) $(TARGET1)
	rm -fr $(identifier) *.o cov* *.dSYM *.gcda *.gcno *.gcov *.out

graph:
	dot -Tpng graph.gv -o graph.png && eog graph.png 

ci: CFLAGS += -Werror
ci: compile
