#include "ip.h"
#include<iostream>
#include <gtest/gtest.h>
TEST(IPAddressytug, getIPClass) {
	IPAddress I1;
	EXPECT_EQ("Class A", I1.getIPClass(000));
}

