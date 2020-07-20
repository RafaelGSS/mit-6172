# Place all the compile methods here
python:
	python2 main.py
java:
	echo "I don't will compile java on this machine :)"
c: main.c
	gcc main.c -o main.o
	./main.o
c-for-order: main-for-order.c
	gcc main-for-order.c -o main-for-order.o
	./main-for-order.o
c-compiler-optimization: main-for-order.c
	gcc -O3 main-for-order.c -o main-compiler-optimization.o
	./main-compiler-optimization.o
c-parallel-loops: main-parallel-loops.c
	gcc -O3 -fcilkplus -lcilkrts main-parallel-loops.c -o main-parallel-loops.o
	./main-parallel-loops.o
