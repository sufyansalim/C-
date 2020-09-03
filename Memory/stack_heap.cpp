#include <iostream>

using std::cout;
using std::endl;

// A simple function that returns a pointer to a stack variable
int *bad_return() {
  // Lifetime of this variable memory only until the end of the function!
  int a = 5;
  cout << "Address of a: " << &a << endl;
  return &a;
}

// A simple function a pointer to a variable on the heap
int *good_return() {
  // The lifetime of the memory is until we deallocate it!
  int *a = new int;
  cout << "Address of a: " << a << endl;
  *a = 5;
  return a;
}

int main() {
  // Let's get a pointer from two different functions
  int *bad = bad_return();
  int *good = good_return();

  // When we derefernce one of these, our program (usually) crashes
  // That is because we're accessing memory that has gone out of scope!
  // cout << "Address of bad: " << bad << " Value: " << *bad << endl;
  cout << "Address of good: " << good << " Value: " << *good << endl;

  // We can use delete to free out dynamically allocated memory
  delete good;

  return 0;
}