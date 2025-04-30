#include "pch.h"
#include "CppUnitTest.h"
#include "..\\Project2\Functions.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			num = 16;
			Assert::AreEqual(20922789888000, factorialRecursive(num));
		}

		TEST_METHOD(TestMethod2) {
			num = 20;
			Assert::AreEqual(2432902008176640000, factorialRecursive(num));
		}

		TEST_METHOD(TestMethod3) {
			num = 4;
			Assert::AreEqual(false, isPrimeIterative(num));
		}

		TEST_METHOD(TestMethod4) {
			num = 20;
			Assert::AreEqual(false, isPrimeIterative(num));
		}

		TEST_METHOD(TestMethod5)
		{
			num = 14;
			Assert::AreEqual(87178291200, factorialRecursive(num));
		}

		TEST_METHOD(TestMethod6) {
			num = 15;
			Assert::AreEqual(1307674368000, factorialRecursive(num));
		}

		TEST_METHOD(TestMethod7) {
			num = 15;
			Assert::AreEqual(false, isPrimeIterative(num));
		}

		TEST_METHOD(TestMethod8) {
			num = 7;
			Assert::AreEqual(true, isPrimeIterative(num));
		}

		TEST_METHOD(TestMethod9) {
			num = 11;
			Assert::AreEqual(true, isPrimeIterative(num));
		}

		TEST_METHOD(TestMethod10) {
			num = 56;
			Assert::AreEqual(false, isPrimeIterative(num));
		}
	};
}
