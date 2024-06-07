#include "pch.h"
#include "CppUnitTest.h"
#include "../TestCppUnitTests/Math.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Math math;
			Assert::AreEqual(5, math.add(2, 3));
		}
	};
}
