GCOV_OUTPUT = *.gcda *.gcno *.gcov 
GCOV_CCFLAGS = -fprofile-arcs -ftest-coverage
CC     = gcc
CCFLAGS = -g -O2 -Wall -Werror -W -fno-omit-frame-pointer -fno-common -fsigned-char $(GCOV_CCFLAGS)


all: tests

main.c:
	sh make-tests.sh > main.c

tests: main.c linked_list_queue.o test_linked_list_queue.c CuTest.c main.c
	$(CC) $(CCFLAGS) -o $@ $^
	./tests
	gcov main.c test_linked_list_queue.c linked_list_queue.c

linked_list_queue.o: linked_list_queue.c
	$(CC) $(CCFLAGS) -c -o $@ $^

clean:
	rm -f main.c linked_list_queue.o tests $(GCOV_OUTPUT)
