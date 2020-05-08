#include "types.h"
#include "stat.h"
#include "user.h"


// A function to print all prime
// factors of a given number n

int sqrt (int x)
{
    // Base cases
    if (x == 0 || x == 1)
    return x;

    // Staring from 1, try all numbers until
    // i*i is greater than or equal to x.
    int i = 1, result = 1;
    while (result <= x)
    {
      i++;
      result = i * i;
    }
    return i - 1;
}

void primeFactors(int n)
{
	// Print the number of 2s that divide n
	while (n % 2 == 0)
	{
		//cout << 2 << " ";
    printf (1,"2 ");
		n = n/2;
	}

	// n must be odd at this point. So we can skip
	// one element (Note i = i +2)
	for (int i = 3; i <= sqrt(n); i = i + 2)
	{
		// While i divides n, print i and divide n
		while (n % i == 0)
		{
			//cout << i << " ";
      printf (1,"%d ",i);
      n = n/i;
		}
	}

	// This condition is to handle the case when n
	// is a prime number greater than 2
	if (n > 2)
		//cout << n << " ";
    printf (1,"%d ",n);
}


int main(int argc, char *argv[])
{
  int val;
	argv++;

  		if (argv[0][0] == '-') {
  			printf(1, "Input ERROR: negative integer not allowed");

                  }
      else
      {
  		val = atoi(argv[0]);
  		if (val == 0) {
  			printf(1, "Input ERROR: %s is not valid integer", argv[0]);

                  }
  	  else primeFactors(val);
    }
  printf (1,"\n");
  exit ();
}
