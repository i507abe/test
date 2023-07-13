#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%d", &n);

  if( n % 2 == 0 ){
    printf("%d は偶数です\n", n);
  }else{
    printf("%dは奇数です\n");
  }
  
  return 0;
}
