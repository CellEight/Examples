#ifndef GCD_H
#define GCD_H

/**
 * Cacluate the greatest common divsior of two integers.
 * Note: gcd(0,0) will return 0 and print an error message.
 * @param a the first integer
 * @param b the second integer
 * @return the greatest common divsior of a and b
 *
 */

long gcd(long a, long b);
long gcd(long a, long b, long &x, long &y);
#endif
