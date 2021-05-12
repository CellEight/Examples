#include "PTriple.h"
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
  PTriple* table;
  long N;

  cout << "N = ";
  cin >> N;
  if (N <= 0) return 0;

  table = new PTriple[N];

  long idx = 0;
  long rootN = long(sqrt(double(N)));


  for (long m=1; m<=rootN; m++) {
    for (long n=1; n<=rootN; n++) {
      PTriple P = PTriple(m,n);
      if (P.getC() <= N) {
        table[idx] = P;
        idx++;
      }
    }
  }

  sort(table, table+idx);

  cout << table[0] << endl;
  for (int k=1; k<idx; k++) {
    if (table[k] != table[k-1]) {
      cout << table[k] << endl;
    }
  }

  delete[] table;
  return 0;
}
