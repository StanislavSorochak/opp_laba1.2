#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_laba1.2/Goods.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Goods g;
			g.setCount(10);
			g.setPrice(20);
			string actual = g.toString();
			string expected = " Вартiсть, грн: 200\n";
			Assert::AreEqual(actual, expected);
		}
	};
}
