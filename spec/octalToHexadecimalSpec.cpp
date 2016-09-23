#include "stdafx.h"
#include "CppUnitTest.h"
#include "../src/octalToHexadecimal.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace spec
{
	TEST_CLASS(octalToHexadecimalSpec)
	{
	public:

		TEST_METHOD(zero)
		{
			Assert::AreEqual(0, octalToHexadecimal(0), L"octalToHexadecimal: zero as parameter failed", LINE_INFO());
		}
		TEST_METHOD(positive)
		{
			Assert::AreEqual(1, octalToHexadecimal(1), L"octalToHexadecimal: one as parameter failed", LINE_INFO());
			Assert::AreEqual(82, octalToHexadecimal(202), L"octalToHexadecimal: 202 as parameter failed", LINE_INFO());
			Assert::AreEqual(53699, octalToHexadecimal(1233231), L"octalToHexadecimal: 1233231 as parameter failed", LINE_INFO());
		}
		TEST_METHOD(negative)
		{
			Assert::AreEqual(0, octalToHexadecimal(-1), L"octalToHexadecimal: negative number as parameter failed", LINE_INFO());
		}
		TEST_METHOD(fraction)
		{
			Assert::AreEqual(8.24f, octalToHexadecimalFraction(10.11), 0.0f, L"octalToHexadecimalFraction: 10.11 as parameter failed", LINE_INFO());
			Assert::AreEqual(0.06f, octalToHexadecimalFraction(0.015625), 0.0f, L"octalToHexadecimalFraction: 0.015625 as parameter failed", LINE_INFO());
			Assert::AreEqual(0.38f, octalToHexadecimalFraction(0.16), 0.0f, L"octalToHexadecimalFraction: 0.16 as parameter failed", LINE_INFO());
		}


	};
}