#include "vector-sieve.h"
#include <iostream>
using namespace std;

const long N = 10000000;
const long TABLE_SIZE = 800000;

int main() {
  vector<long> primes;
//  long N;
//N=10000000;
  sieve(N, primes);

  cout << "We found " << primes.size() << " primes" << endl;

//cout << "The first 10 primes we found are these: " << endl;

  for (long k=0; k<primes.size(); k++) cout << primes[k] << endl;
  //cout << endl;
  cout << "The largest prime we found was " << primes[primes.size()-1] << endl;
  return 0;
}
