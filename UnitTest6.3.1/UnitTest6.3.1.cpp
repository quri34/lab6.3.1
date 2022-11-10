#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab6.3.1\lab6.3.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest631
{
	TEST_CLASS(UnitTest631)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[4] = { 1,2,3,4 };
			int max = Max(a, 4);
			Assert::AreEqual(4, max);
		}
	};
}
