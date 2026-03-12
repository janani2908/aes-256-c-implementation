CC=gcc

all:
	$(CC) aes.c main.c -o aes_test

run:
	./aes_test

clean:
	rm -f aes_test
