#include <math.h>
#include <stdio.h>
int main() {
  double i, n;
  printf("Enter the value: ");
  scanf("%lf", &n);
  for (i = 1; i <= n; i++) {
    printf("%.1lf ", pow(2, i));
  }
  return 0;
}