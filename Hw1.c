#include <stdio.h>
#include <stdlib.h>
int findnum(int a);
int evenfib(int r);
int smallmul(int r);
//question #1
int findnum(int a){
  int sum =0;
  int x=0;
  for (x= 0;x<a;x++){
    //printf("%d\n",x);
    if (x%3==0)sum+=x;
    if (x%5==0) sum+=x;
    if (x%15==0) sum-=x;
  //  printf("%d\n",sum);
  }
  return sum;
}

//question #2
int evenfib(int r){
  int value1=1;
  int value2=1;
  int value3=0;;
  int sum =0;
//  printf("%d %d\n",value1,value2);
  while(value3<r){
    value3=value2+value1;
    if (value3%2==0) sum+=value3;
    value1=value2;
    value2=value3;
  //  printf("%d %d\n",value1,value2);
  }
  return sum;
}
//question 3
int smallmul(int r){
  int searching =1;
  int answer=r*2;
  int multiples=0;
  int i=2;
  int x;
  long largest = 1000000000;
  for (x=40;x<largest;x+=2){
    i=2;
    searching=1;
    while(searching &&i<21){
      //printf("In loop");
      if (x%i!=0) searching=0;
      i++;
    }
    if (searching) return x;
  }
  return x;
}

int main(){
  printf("The answer is: %d \n",findnum(1000));
  printf("The next answer is: %d\n",evenfib(4000000));
  printf("The smallest multiple is:%d\n",smallmul(20));
  return findnum(1000);
}
