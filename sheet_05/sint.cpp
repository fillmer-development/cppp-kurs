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

#include <exception>
#include <iostream>
#include <limits>

class sint
{
private:
  int value;

public:
  sint()
  {
    value = 0;
  }

  sint(int i)
  {
    value = i;
  }

  ~sint() = default;

  sint(const sint &s)
  {
    value = s.value;
  }

  sint &operator=(const sint &s)
  {
    value = s.value;
  }

  sint(sint &&s)
  {
    value = s.value;
  }
  sint &

  operator=(sint &&s)
  {
    value = s.value;
  }
  int getUnderlyingValue() const { return value; }

  friend sint operator+(sint lhs, sint rhs)
  {
    int res;
    if (__builtin_add_overflow(lhs, rhs, res))
      return res;
    else
    {
      throw std::overflow_error("result would overflow integer size!");
    }
  }
  friend sint operator-(sint lhs, sint rhs)
  {
    int res;
    if (__builtin_sub_overflow(lhs, rhs, res))
      return res;
    else
    {
      throw std::overflow_error("result would overflow integer size!");
    }
  }
  friend sint operator*(sint lhs, sint rhs)
  {
    int res;
    if (__builtin_mul_overflow(lhs, rhs, res))
      return res;
    else
    {
      throw std::overflow_error("result would overflow integer size!");
    }
  }
  friend sint operator/(sint lhs, sint rhs)
  {
    if (lhs.getUnderlyingValue() >= rhs.getUnderlyingValue())
    {
      return rhs.getUnderlyingValue() / lhs.getUnderlyingValue();
    }
    else
    {
      int res;

      if (__builtin_mul_overflow(lhs, 1 / rhs, res))
      {
        return res;
      }
    }
  }
  sint &operator++();   // prefix ++: no parameter, returns a reference
  sint operator++(int); // postfix ++: dummy parameter, returns a value
  sint &operator--();   // prefix ++: no parameter, returns a reference
  sint operator--(int); // postfix ++: dummy parameter, returns a value
  friend std::ostream &operator<<(std::ostream &os, const sint &s);
};

int main()
{
  // You are of course free to extend these tests!

  // // just a small test
  // sint a = 1;
  // sint b(41);
  // sint c = a + b;
  // cout << c << '\n';

  // // setup some values
  // sint max = std::numeric_limits<int>::max();
  // sint min = std::numeric_limits<int>::min();
  // sint result;

  // // test operator+
  // result = max + sint(10);
  // cout << result << '\n';
  // result = min + sint(-10);
  // cout << result << '\n';

  // // test operator-
  // result = min - sint(10);
  // cout << result << '\n';
  // result = max - sint(-10);
  // cout << result << '\n';

  // // test operator*
  // result = max * sint(2);
  // cout << result << '\n';
  // result = min * sint(2);
  // cout << result << '\n';

  // // test operator/
  // result = sint(42) / sint(0);
  // cout << result << '\n';
  return 0;
}
