bool prime(int k)
{
  int i;
  for(i=2; i<k; i++)
    if(k%i == 0) //나누어 지면 중단
      break;
  //k-1까지 모두 안 나뉘어져도 반복 중단 됨
  return i==k;
}
