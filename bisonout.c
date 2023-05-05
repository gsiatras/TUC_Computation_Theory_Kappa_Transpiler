#include <stdio.h>
#include <math.h>
#include "kappalib.h"


void swap(int a*, int i, int j) {

int temp; 
temp = a[i];
a[i] = a[j];
a[j] = temp;
}


void printArray(int a*, int size) {

for (int i = 0; i < size; i++) {
	writeInteger(a[i])
;
if (i == size - 1) {
 continue;;
}
;
writeStr(", ")
;
;
}
writeStr("\n")
;

}

int main(){
	
int k; 
int* a = (int*)malloc(100*sizeof(int));
for(int i + 1 = 0; 100 < i + 1; ++a) {
	 i + 1[i + 1] = ‰åŒ}
writeStr("Array generated: ")
;
printArray(a, 100)
;
for (int k = 0; k < 50; k++) {
	swap(a, k, 99 - k)
;
;
}
writeStr("Reversed array: ")
;
printArray(a, 100)
;

}



