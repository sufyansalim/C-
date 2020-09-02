#include <array>
#include <iostream>

using std::array;
using std::cout;
using std::endl;

int main() {
  // Declare and initialize an array
  array<int, 5> a1{0, 1, 2, 3, 4};

  cout << "Range-Based" << endl;
  for (auto i : a1) {
    cout << i << " ";
  }
  cout << endl;

  cout << "Iterators" << endl;
  // We could also use a1.begin() and a1.end()
  for (auto it = begin(a1); it < end(a1); it++) {
    cout << *it << " ";
  }
  cout << endl;

  cout << "Reverse-Iterators" << endl;
  // We could also use a1.rbegin() and a1.rend()

  for (auto it = rbegin(a1); it < rend(a1); it++) {
    cout << *it << " ";
  }
  cout << endl;


  //size_t instead auto
  cout << "Explicit size comparison" << endl;
  for (auto i = 0u; i < a1.size(); i++) {
    cout << a1[i] << " ";
  }
  cout << endl;


  cout << "C-Style for loop" << endl;
  int N = 5;
  int c_a[] = {0, 1, 2, 3, 4};
  for (int i = 0; i < N; i++) {
    cout << c_a[i] << " ";
  }
  cout << endl;

  return 0;

}