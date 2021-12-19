#include <stdio.h>
#include <math.h>

long convert(int);

int main() {
    int n, binary;
    printf("\n\nEnter a decimal number: ");
    scanf("%d", &n);

    binary = convert(n);
    printf("\n\n%d in decimal =  %ld in binary\n\n", n, binary);
    return 0;
}

long convert(int n) {
  long binary = 0;
  int rem, i = 1;

  while (n != 0) {
      rem = n % 2;
      binary = binary +  rem*i;   //decimal to binary formula
      i = i * 10;
      n = n / 2;
  }
  return binary;
}