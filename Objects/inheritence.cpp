#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

// Inheritance allows us to re-use code for classes and structs!
// If we have multiple classes/structs that share the same data members and
// methods, we can implement those a single time as a parent class/struct, and
// inherit from that class/struct!

// Here, we create a simple struct with a single string
struct Parent {
  // Out constructor that takes a string
  Parent() = default;
  // Parent(string n) : { name = n; }
  // string name;
  Parent(string n) : name(n) {}
  const string name;
  void print_name() { cout << "My name is " << name << endl; }
};

// Our Child struct inherits from the Parent struct
// We can expand on the parent struct, and implement things specific to the
// child struct
struct Child : Parent {
  // We can use an initialization list to call our parents constructor
  // These can automatically called before we construct a Child object
  Child(string n, string t) : Parent(n) { favorite_toy = t; }
  string favorite_toy;
  void print_toy() {
    cout << "My favorite toy is " << favorite_toy << endl;
  }
};

int main() {
  // Let's look at the sizes of different object
  // The string object in modern versions of GCC is 32 Bytes
  // Our Parent struct with one string ends up being the size of the string
  // Our Child struct ends up having the size of two strings!
  cout << "sizeof(string) = " << sizeof(string) << endl;
  cout << "sizeof(Parent) = " << sizeof(Parent) << endl;
  cout << "sizeof(Child) = " << sizeof(Child) << endl;

  // Let's create an instance of our structs
  Parent p("Dexter Morgan");
  Child c("Deb", "teddy");

  // And do some prints!
  p.print_name();
  c.print_name();
  c.print_toy();

  return 0;
}