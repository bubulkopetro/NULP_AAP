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

			int n = 0, x = 0.00;
			int R;
			R = (x * x * (2.0 * n - 1.0) / (2.0 * n + 1.0));
			
			Assert::AreEqual(0, R);
		}


	};
}
