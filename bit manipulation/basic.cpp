
// #include <cstdlib>
// #include <csignal>
// #include <csetjmp>
// #include <cstdarg>
// #include <typeinfo>
// #include <typeindex>
// #include <type_traits>
#include <bitset>
#include <functional>
// #include <ctime>
// #include <chrono>
// #include <cstddef>
// #include <initializer_list>
// #include <tuple>
// #include <new>
// #include <memory>
// #include <scoped_allocator>
#include <climits>
#include <cfloat>
#include <cstdint>
// #include <cinttypes>
// #include <limits>
// #include <exception>
// #include <stdexcept>
// #include <cassert>
// #include <system_error>
// #include <cerrno>
// #include <cctype>
// #include <cwctype>
// #include <cstring>
// #include <cwstring>
// #include <cwchar>
// #include <cuchar>
// #include <valarray>
#include <random>
#include <numeric>
#include <ratio>
// #include <cfenv>
// #include <iosfwd>
// #include <ios>
// #include <istream>
// #include <ostream>
#include <iostream>
// #include <fstream>
// #include <sstream>
// #include <strstream>
// #include <iomanip>
// #include <streambuf>
// #include <cstdio>
// #include <locale>
// #include <clocale>
// #include <codecvt>
// #include <regex>
// #include <atomic>
// #include <thread>
// #include <mutex>
// #include <future>
// #include <condition_variable>
// #include <ciso646>
// #include <ccomplex>
// #include <ctgmath>
// #include <cstdalign>
// #include <cstdbool>
// #include <iostream>
#include <utility>
#include <string>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <set>
#include <map>
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
cout<<"not set bit\n";

//bit set
// if we have to make some particular bit 1
// 10010 if we want to second bit 1 
// 10010 0r(|) 00100  so now how we will get 00100
// if we do 1<<2 i.e 00001 << 1 = 00010<<1 = 00100
printbit(a | (1<<2));

//bit unset
// 10010 --for first bit -- so we need somethong like 
// 11101 -- !(00010) -- (~(1<<1)) == ~=!
printbit(a&(~(1<<1)));
 //togle


}
