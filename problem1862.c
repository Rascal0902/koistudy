bool prime(int k)
{
  int i;
  for(i=2; i<k; i++)
    if(k%i == 0) //������ ���� �ߴ�
      break;
  //k-1���� ��� �� ���������� �ݺ� �ߴ� ��
  return i==k;
}
