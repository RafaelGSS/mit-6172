fibonacci: fibonacci.c
	gcc fibonacci.c -o fibonacci.o
fibonacci-thread: fibonacci-pthreads.c
	gcc fibonacci-pthreads.c -lpthread -o fibonacci-pthreads.o
fibonacci-cilk: fibonacci-cilk.c
	gcc -fcilkplus -lcilkrts fibonacci-cilk.c -o fibonacci-cilk.o
