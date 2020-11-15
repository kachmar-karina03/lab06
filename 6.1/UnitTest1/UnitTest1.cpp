#include "pch.h"
#include "CppUnitTest.h"
#include "../6.1/6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)

		{
			int t = 0;

			const int n = 23;
			int a[n]= { 4,13,8,5,5,16,7,5,11,7,4,8,16,5,13,14,14,11,12,7,7,7 };

			t = Sum( a, n) ;
			Assert::AreEqual(t,199 );
		}
	};
}
