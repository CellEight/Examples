#include "uniform.h"
#include "gcd.h"
#include <iostream>
using namespace std;

/**
 * This main generates many pairs of values form the set {1,2,...,n}
 * and reports how often the pairs are relatively prime. the value n
 * and the number of pairs are specified by the user.
 */

int main() {
  long n;
  long reps;
  long a,b;
  long count;

  count = 0;

  cout << "Enter n ---> ";
  cin >> n;
  cout << "Enter number of pairs to try ---> ";
  cin >> reps;

  for(long k=1; k<=reps; k++) {
    a = unif(n);
    b = unif(n);
    if (gcd(a,b) == 1) count++;
  }

  cout << count/(double(reps)) << "\n";

  return 0;
}
