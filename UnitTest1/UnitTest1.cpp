#include "pch.h"
#include "CppUnitTest.h"
#include "../6.1_rec/6.1_rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            const int n = 3;
            int a[n] = { 4, 6, 8 };
            int l;
            l = sum(a, n, 0);
            Assert::AreEqual(l, 0);
		}
	};
}
