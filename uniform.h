#ifndef UNIFORM_H
#define UNIFORM_H

/**
 * Generate a random number between 0 and 1.
 * @return a unform random number in [0,1]
 */
 double unif();

/**
 * Generate a random number in a real interval
 * @param a the largest value this procedure can produce/
 * @param b the other end point of the interval
 * @return a uniform random number in [0,1]
 */
 double unif(double a, double b);

/**
 * Generate a random integer between 1 and a given value
 * @parm n the largest value this procedure can produce.
 * @return a uniform random value in {1,2,...,n}.
 */
long unif(long a);

/**
 * Reset the random number generator based on the system clock.
 */
 void seed();

 #endif
