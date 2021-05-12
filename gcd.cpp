#include "gcd.h"
#include <iostream>
using namespace std;

long gcd(long a, long b) {
  //input validation
  if((a==0)&&(b==0)) {
    cerr << "WARNING: gcd called with both arguments equals to zero." << endl;
    return 0;
  }
  if(a<0){
    a = -a;
  }
  if(b<0){
    b=-b;
  }
  //logic
  if(a==0){
    return b;
  }

  long d;

  for(long t=1; t<=a; t++){
    if((a%t==0)&&(b%t==0)){
      d = t;
    }
  }
  return d;
}

long gcd(long a, long b, long &x, long &y) {
    long d;

    if (b==0) {
        if (a<0) {
            d = -a;
            x = -1;
            y = 0;
        }
        else {
            d = a;
            x = 1;
            y = 0;
        }
        return d;
    }

    if (b<0) {
        d = gcd(a,-b,x,y);
        y = -y;
        return d;
    }

    if (a<0) {
        d = gcd(-a,b,x,y);
        x = -x;
        return d;
    }

    long aa = b;
    long bb = a%b;
    long qq= a/b;
    long xx, yy;

    d = gcd(aa,bb,xx,yy);

    x = yy;
    y = xx - qq*yy;

    return d;
}

