#include "kappalib.h"


/* program */ 



int limit, num, counter;

int prime(int n) {
int i;
int result, isPrime;
if (n < 0) {
 
result = prime(-n); 
} else {
 
if (n < 2) {
 
result = 0; 
} else {
 
if (n == 2) {
 
result = 1; 
} else {
 
if (((int) n) % ((int) 2) == 0) {
 
result = 0; 
} else {
 
i = 3;
isPrime = 1;
while (isPrime && (i < n / 2)) { 
isPrime = ((int) n) % ((int) i) != 0;
i = i + 2; }
result = isPrime; 
}  
}  
}  
} 
return result;
}

int main() {
limit = readInteger();
writeInteger(2);
writeStr(" ");
counter = 1;
for (int num =3; num<limit + 1; num+=2) { 
if (prime(num)) {
 
counter = counter + 1;
writeInteger(num);
writeStr(" "); 
} }
writeStr("\nThe total number of primes found is:");
writeInteger(counter);
writeStr("\n");
}



