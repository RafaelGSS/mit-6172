#include <inttypes.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

float tdiff(struct timeval* start, struct timeval* end) {
  return (end->tv_sec - start->tv_sec) +
    1e-6 * (end->tv_usec - start->tv_usec);
}

int64_t fib(int64_t n) {
  if (n < 2) {
    return n;
  } else {
    int64_t x = fib(n - 1);
    int64_t y = fib(n - 2);
    return (x + y);
  }
}

int main(int argc, char *argv[]) {
  struct timeval start, end;

  gettimeofday(&start, NULL);
  int n = atoi(argv[1]);
  int result = fib(n);
  printf("Fibonacci of %d is %d.\n", n, result);

  gettimeofday(&end, NULL);
  printf("%0.6f\n", tdiff(&start, &end));
  return 0;
}
