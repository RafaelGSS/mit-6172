// Copyright (c) 2012 MIT License by 6.172 Staff

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <sys/time.h>

typedef uint32_t data_t;
const int U = 100000;   // size of the array. 10 million vals ~= 40MB
const int N = 1000000;  // number of searches to perform

float tdiff(struct timeval* start, struct timeval* end) {
  return (end->tv_sec - start->tv_sec) +
    1e-6 * (end->tv_usec - start->tv_usec);
}

int main() {
  data_t* data = (data_t*) malloc(U * sizeof(data_t));
  if (data == NULL) {
    free(data);
    printf("Error: not enough memory\n");
    exit(-1);
  }

  // fill up the array with sequential (sorted) values.
  int i;
  for (i = 0; i < U; i++) {
    data[i] = i;
  }

  printf("Allocated array of size %d\n", U);
  printf("Summing %d random values...\n", N);

  struct timeval start, end;

  gettimeofday(&start, NULL);
  data_t val = 0;
  data_t seed = 42;
  for (i = 0; i < N; i++) {
    int l = rand_r(&seed) % U;
    val = (val + data[l]);
  }

  free(data);
  printf("Done. Value = %d\n", val);

  gettimeofday(&end, NULL);
  printf("%0.6f\n", tdiff(&start, &end));

  return 0;
}
