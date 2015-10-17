#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE MainTest
#include <boost/test/unit_test.hpp>
#include "add.h"

BOOST_AUTO_TEST_CASE( sanitytest )
{
    BOOST_CHECK(true);
}

BOOST_AUTO_TEST_CASE( AddWorks )
{
    BOOST_CHECK_EQUAL(add(3,5), 8);
}
