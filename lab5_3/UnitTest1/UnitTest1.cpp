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
			int n = 0, x = 0;
			int R;
			R = pow(x, 4) / ((2. * n + 1.) * 2. * n);
			
			Assert::AreEqual(3.667975, 0.000001, R);

		}
	};
}
