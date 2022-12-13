#include<iostream>
#include<cmath>
using namespace std;

int adiff(int a, int b){
  int c;
  c = a-b;
  c = abs(c);
  if (c%360<=180){
    return c%360;
  }else{
    return 360-(c%360);
  }
}


int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}
