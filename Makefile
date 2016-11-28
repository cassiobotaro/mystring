test:mystring_test.o
	gcc -o test mystring_test.o
	./test
	rm test

mystring_test.o:
	gcc -o mystring_test.o -c mystring_test.c

clean:
	rm -rf *.o
	rm -rf *.out

