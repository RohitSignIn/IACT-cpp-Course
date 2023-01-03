#include<iostream>
using namespace std;

int gcd(int a,int b){
  int n = 1;
  for(int i=2; i<=a-1; i++){
    
    if(a%i==0 && b%i==0){
      n=i;
    }
  }
  return n;
}

int lcm(int a, int b){
  int d = gcd(a,b);
  int c = (a*b)/d;
  return c;
}

int main(){
  int a = 16;
  int b = 12;
  cout<<lcm(a, b);
  return 0;
}