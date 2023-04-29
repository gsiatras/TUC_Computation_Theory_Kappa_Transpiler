#include "kappalib.h"


/* program */ 



int next_random;

int next() {
next_random = ((int) (next_random * 1103515245 + 12345)) % ((int) 2147483648);
if (next_random < 0) {
 
next_random = -next_random; 
}
return next_random;
}

void swap(double *a, int i, int j) {
double temp;
temp = a[i];
a[i] = a[j];
a[j] = temp;
}



void quickFSort(double *a, int low, int high) {
int pivot, i, j;
if (low < high) {
 
pivot = low;
i = low;
j = high;
while (i < j) { 
while (a[i] <= a[pivot] && i < high) { 
i = i + 1; }
while (a[j] > a[pivot]) { 
j = j - 1; }
if (i < j) {
 
swap(a, i, j); 
} }
swap(a, pivot, j);
quickFSort(a, low, j - 1);
quickFSort(a, j + 1, high); 
}
}



void printArray(int *a, int size) {
for (int i =0; i<size; i++) { 
writeInteger(a[i]);
if (i == size - 1) {
 
continue; 
}
writeStr(", "); }
writeStr("\n");
}



void printFArray(double *a, int size) {
for (int i =0; i<size; i++) { 
writeScalar(a[i]);
if (i == size - 1) {
 
continue; 
}
writeStr(", "); }
writeStr("\n");
}



int main() {
const int aSize = 100;
writeStr("Give a seed for the random number generator: ");
readInteger(next_random);
int* a=(int*)malloc(100*sizeof(int));
for(int i=0; i < 100; ++i)
 {a[i] = i;}
;
double* f=(double*)malloc(100*sizeof(double));
for(int a_i=0; a_i < 100; ++a_i)
 {f[a_i] = a[a_i] / 2.0;}
;
writeStr("Random array generated: ");
printFArray(f, aSize);
quickFSort(f, 0, aSize - 1);
writeStr("Sorted array: ");
printFArray(f, aSize);
}



