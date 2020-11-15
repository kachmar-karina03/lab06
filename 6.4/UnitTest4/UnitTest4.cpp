#include "pch.h"
#include "CppUnitTest.h"
#include "../6.4/6.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			int t = 0;

			const int n = 8;
			int a[n];

			t = UnitTest(a, n);
			Assert::AreEqual(t, 1717986912);



		}
	};
}
