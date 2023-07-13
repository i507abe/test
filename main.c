#include <stdio.h>
#include <stdlib.h>　　//malloc関数とfree関数を使用するため
#include <math.h>　　　//sqrt関数を使用するため

double myRoot(double x)
{
  if (x < 0) {　　　　//0も計算させるため
    exit(1);
  }
  return sqrt(x);　　　//戻り値は平方根の計算結果であり倍精度実数型でなければならないため
}

int main(void)
{
  int i = 0;　　　　　//変数iを初期化するため
  double *x = (double *)malloc(sizeof(double) * 101); // 0~100までなので101要素の配列を確保する必要があるため

  while (i <= 100) {
    x[i] = myRoot((double)i);
    i++;
  }

  printf("x[0] = %f\n", x[0]);
  printf("x[1] = %f\n", x[1]);
  printf("x[2] = %f\n", x[2]);
  printf("x[3] = %f\n", x[3]);
  printf("x[4] = %f\n", x[4]);
  printf("x[99] = %f\n", x[99]);
  printf("x[100] = %f\n", x[100]);

  free(x);
  return 0;
}
