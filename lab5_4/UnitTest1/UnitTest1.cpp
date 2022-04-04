#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double res;
			res = P0();
			Assert::AreEqual(8.78923 * exp(-23), 0.00001 * exp(-23), res);
		}
	}; 
}
