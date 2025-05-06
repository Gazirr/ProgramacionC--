#include "pch.h"
#include "CppUnitTest.h"
#include "../CalculadoraFuncional/CalculadoraFuncional.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnityTestCalculator
{
	TEST_CLASS(UnitTestCalculator)
	{
	public:
		
		TEST_METHOD(TestSuma)
		{
			num1 = 10.0;
			num2 = 5.0;
			Divi();
			Assert::AreEqual(2.0, divi, L"Error en la funcion division : el resultado no es el esperado");
		}
	};
}
