// Copyright (c) 2008-2013 Andrew Sutton
//
// This file is distributed under the MIT License. See the accompanying file
// LICENSE.txt or http://www.opensource.org/licenses/mit-license.php for terms
// and conditions.

#include <cassert>
#include <vector>

#include <origin/range/algorithm.hpp>

bool pos(int n) { return n > 0; }

int main() 
{
  int a[3] { 1, 2, 3 };
  assert(origin::all_of(a, pos));

  std::vector<int> v { 1, 2, 3 };
  assert(origin::all_of(v, pos));

  const std::vector<int>& cv = v;
  assert(origin::all_of(cv, pos));
}