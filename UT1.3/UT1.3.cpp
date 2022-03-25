#include "pch.h"
#include "CppUnitTest.h"
#include "../PR1.3/Money.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Money t, a, b, c;
			a.SetHrn(2);
			b.SetHrn(5);
			b.SetKop(50);
			c.SetHrn(3);
			c.SetKop(50);
			t = Vid(b, c);

			Assert::AreEqual(t, a);
		}
	};
}