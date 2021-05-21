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

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

// TODO provide an implementation
void bubble_sort(std::vector<int> &v);

// TODO provide an implementation
void bubble_sort(std::vector<int> &v, size_t from, size_t to);

std::ostream &operator<<(std::ostream &os, const std::vector<int> &v) {
  std::copy(v.begin(), v.end(), std::ostream_iterator<int>(os, " "));
  return os;
}

int main() {
  std::vector<int> v = {1, 5, 6, 23, 7, 8, 9, 21, 12, 4};
  std::cout << "unsorted: ";
  std::cout << v << '\n';
  bubble_sort(v);
  std::cout << "sorted: ";
  std::cout << v << '\n';

  std::vector<int> w = {1, 5, 6, 23, 7, 8, 9, 21, 12, 4};
  std::cout << "unsorted: ";
  std::cout << w << '\n';
  bubble_sort(w, 0, 5);
  std::cout << "partially sorted: ";
  std::cout << w << '\n';
  return 0;
}
