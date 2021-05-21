//===----------------------------------------------------------------------===//
//
// Philipp Schubert
//
//    Copyright (c) 2017 - 2021
//    Secure Software Engineering Group
//    Heinz Nixdorf Institute
//    Paderborn University
//    philipp.schubert@upb.de
//
//===----------------------------------------------------------------------===//

#include <initializer_list>
#include <iostream>
#include <utility>

class vec {
private:
  // Variable to store the number of elements contained in this vec.
  size_t elements;
  // Pointer to store the address of the dynamically allocated memory.
  double *data;

public:
  /// Creates a vec variable of size 'size'.
  /// This constructor has to allocate an array of 'size' double variables.
  vec(size_t size);

  /// Creates a vec variable of size 'size' and to initialize all entires with
  /// the value of 'ival'. This constructor has to allocate an array of 'size'
  /// double variables and initialize all of its elements with the value of
  /// 'ival'.
  vec(size_t size, double ival);

  /// Creates a vec variable with the contents of 'ilist'.
  vec(std::initializer_list<double> ilist);

  /// Deallocates the dynamically allocated heap memory.
  ~vec();

  /// Copy constructor that creates a copy of the vec variable 'v'.
  vec(const vec &v);

  /// Copy assignment operator. Creates a copy of vec variable 'v'.
  vec &operator=(const vec &v);

  /// Move constructor that steals the data of the vec variable 'v'.
  vec(vec &&v);

  /// Move assignment operator. Moves from the vector variable 'v'.
  vec &operator=(vec &&v);

  /// Returns the number of elements of the vector.
  size_t size() const;

  /// Returns a reference to the value at position 'idx'.
  /// This function does not perform a range check.
  double &operator[](size_t idx);

  /// Returns a reference to the value at position 'idx'.
  /// This function does not perform a range check.
  /// See the lecture sildes for the reason why we have to provide a const
  /// version of this operator as well.
  const double &operator[](size_t idx) const;

  /// Writes the elements stored in the vec 'v' to the output stream 'os'.
  /// A variable of type vec can then be printed using std::cout << ...
  friend std::ostream &operator<<(std::ostream &os, const vec &v);

  /// Performs an entry-wise addition. Since we pass 'lhs' by value (so we
  /// create a copy of it), you can add 'rhs's entires to 'lhs' return it.
  friend vec operator+(vec lhs, const vec &rhs);

  /// Performs an entry-wise substraction. Since we pass 'lhs' by value (so we
  /// create a copy of it), you can subtract 'rhs's entires to 'lhs' and return
  /// it.
  friend vec operator-(vec lhs, const vec &rhs);

  /// Multiplies each entry with the value of 'scale'.
  /// Since we pass 'lhs' by value (so we create a copy of it), you can multiply
  /// each of it's entries by 'scale' and return it.
  friend vec operator*(vec lhs, double scale);

  /// Computes the scalar product of two vectors.
  friend double operator*(const vec &lhs, const vec &rhs);
};

/// In main we will test all of the above functions and see if they are working
/// correctly.
int main() {
  // Please de-comment the following lines as you have implemented the necessary
  // functionalities.
  // Hint: It is probably a good idea to start implementing the constructors and
  // operator<< so you can see what is going on!

  // vec v(10);          // call to the first constructor
  // vec w(8, 42.123);   // call to the second constructor
  // vec x = {1, 2, 3};  // call to the third constructor
  // vec v1 = std::move(x);   // call to move assign -> move constructor
  // do not use x after this statement
  // vec v2 = {4, 5, 6}; // call to the third constructor
  // vec v3 = {7, 8, 9}; // call to the third constructor
  // vec v4 = v2;        // call to copy assign -> copy constructor

  // std::cout << v4 << '\n';                             // call to operator<<
  // v4[0] = 11;                                          // call to operator[]
  // v4[1] = 12;                                          // call to operator[]
  // std::cout << v4 << '\n';                             // call to operator<<
  // std::cout << "size: " << v4.size() << '\n';          // call to size()
  // std::cout << "add v1 and v2: " << (v1 + v2) << '\n'; // call to operator+
  // std::cout << "sub v1 and v2: " << (v1 - v2) << '\n'; // call to operator-
  // call to operator*
  // std::cout << "scalar product v1 and v2: " << (v1 * v2) << '\n';
  // call to the other operator*
  // std::cout << "v1 times 2: " << (v1 * 2) << '\n';
  // const vec v5(3, 42); // call to second constructor, note v5 is const!
  // this calls the const version of operator[], since v5 is const
  // std::cout << v5[0] << '\n';
  // this calls the const version of operator[], since v5 is const
  // std::cout << v5[2] << '\n';
  // At this point the destructors for all vec variables are called, because
  // all these variables go out of scope at the end of this function.
  return 0;
}
