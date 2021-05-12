#include "vector-sieve.h"
using namespace std;

long sieve(long n, vector<long>& primes) {
  primes.clear();

  if (n<2) return 0;

  vector<bool> theSieve;
  theSieve.resize(n+1);
  for (long k=2; k<=n; k++) theSieve[k] = true;

  long idx = 0;
  for (long k=2; k<=n; k++) {
    if (theSieve[k]) {
      primes.resize(idx+1);
      primes[idx] = k;
      idx++;
      for (long d =2*k; d<=n; d+=k) theSieve[d] = false;
    }
  }
  return primes.size();
}
