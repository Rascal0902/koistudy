void f(int k) //매개 변수 k는 함수 블록 내에서만 사용할 수 있는 지역 변수이다.
{
  printf("%s\n", k%2==0?"even":"odd");
}
