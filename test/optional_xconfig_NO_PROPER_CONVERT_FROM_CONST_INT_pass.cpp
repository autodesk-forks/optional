// Copyright (C) 2015 Andrzej Krzemienski.
//
// Use, modification, and distribution is subject to the Boost Software
// License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//
// See http://www.boost.org/lib/optional for documentation.
//
// You are welcome to contact the author at:
//  akrzemi1@gmail.com

#include "boost/core/lightweight_test.hpp"
#include "boost/optional/detail/optional_config.hpp"

#ifndef BOOST_OPTIONAL_CONFIG_NO_PROPER_CONVERT_FROM_CONST_INT

const int global_i = 0;

struct Binder
{
	Binder(const int& i)
	{
		BOOST_TEST(&i == &global_i);
  }
};

int main()
{
  Binder b = global_i;
  return boost::report_errors();
}

#else

int main()
{
  return boost::report_errors();
}

#endif
