/*
 * C言語のサンプルプログラム - Webkaru
 * - 入力した数値が回文数かどうかを判定 -
 */
#include <stdio.h>
 
int main()
{
 
  /* 数値（整数） */
  int num;
 
  /* 変数 */
  int reverse = 0;
  int remaind;
  int tmp;
 
  /* 数値（整数）の入力 */
  printf("整数を入力してください = ");
  scanf("%d", &num);
 
  tmp = num;
  while(tmp!=0)
  {
    /* 1桁ずつ数値を切り出す */
    remaind = tmp % 10;
 
    /* 数値を反転 */
    reverse = reverse * 10 + remaind;
 
    /* 次の桁へシフト */
    tmp /= 10;
  }
 
  /* 反転した数値と元の数値を比較 */
  if( reverse == num )
    printf("「%d」は回文数です。\n", num);
  else
    printf("「%d」は回文数ではありません。\n", num);
 
  return 0;
}
