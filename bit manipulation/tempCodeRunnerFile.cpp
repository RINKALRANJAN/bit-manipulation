#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <algorithm>
#include <iterator>
#include <cmath>
#include <complex>
#include <iostream>
using namespace std;

void printbit(int n){
for (int c = 4; c >= 0; c--)
  {
    cout<<((n >> c)&1);
  }

  cout<<endl;
}
int main(){
  int a = 18;
printbit(a);
int i =3;
// to check if ith bit is 1 or set bit 

if((a&(1<<i))){
  cout<<"set bit\n";
}
else