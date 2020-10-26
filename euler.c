#include <stdio.h>

int problem1() {
  int i;
  int ans = 0;
  for (i = 0; i < 1000; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      ans = ans + i;
    }
  }
  return ans;
};

int modsum(int a) {
  int count;
  int sum = 0;
  for (count = 1; count < 20; count++) {
    sum += (a % count);
  }
  return sum;
}

int problem5() {
  int ans = 1;
  while (modsum(ans)) {
    ans++;
  }
  return ans;
};

int problem6() {
  int i;
  int sum1 = 0;
  int sum2 = 0;
  for (i = 1; i <= 100; i++) {
    sum1 += i;
    sum2 += (i * i);
  }
  int ans = sum1 * sum1 - sum2;
  return ans;
};
