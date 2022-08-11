#include <iostream> 
using namespace std;

int main()
{
  int a =100;
  int *pa;

  pa=&a;

  cout << "a에 저장된 값: " << a << endl;
  // (cout<<a) 이 실행되면 메모리에서 변수 a의 기억 공간에 저장된 값을 출력
  cout << "a의 주소: " << &a <<endl;
  // a의 주소 출력. 
  cout << "******************************" << endl;
  cout << "*pa에 저장된 값: " << '*pa' << endl;
  //포인터 변수 pa의 값에 간접지정 연산자를 적용한 결과를 출력
  //간접지정 연산자(*)? 혀내의 값을 메모리의 주소로 하여 해당 기억 장소에 한번 더 접근하게 함.
  cout << "a의 주소: " << pa << endl;
  // (cout<<pa) 저장된 값이 출력, 변수 pa에 저장된 값 = 변수 a의 주솟값
  cout << "pa의 주소: " << &pa << endl;

  return 0;
  } 

