import sys, random
from time import *

n = 4096

A = [[random.random()
      for row in xrange(n)]
      for col in xrange(n)]

B = [[random.random()
      for row in xrange(n)]
      for col in xrange(n)]

C = [[0 for row in xrange(n)]
      for col in xrange(n)]

start = time()
for i in xrange(n):
    for j in xrange(n):
        for k in xrange(n):
            C[i][j] += A[i][k] * B[k][j]

end = time()

print '%0.6f' % (end - start)
