#ifndef PTRIPLE_H
#define PTRIPLE_H
#include <iostream>
using namespace std;

class PTriple {
private:
  long a;
  long b;
  long c;

  void reduce();

public:
  PTriple() {
    a = b = c = 0;
  }

  PTriple(long m, long n);

  long getA() const {
    return a;
  }

  long getB() const {
    return b;
  }

  long getC() const {
    return c;
  }

  bool operator<(const PTriple& that) const;

  bool operator==(const PTriple& that) const {
    return ((a==that.a) && (b==that.b) && (c==that.c));
  }

  bool operator!=(const PTriple& that) const {
    return !((*this) == that);
  }
};

ostream& operator<<(ostream&, const PTriple& PT);

#endif
