#include "pch.h"
#include "CppUnitTest.h"
#include"../Ec2Grado Funcional/Ec2Grado Funcional.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestingEq2GradoFuncional
{
	TEST_CLASS(TestingEq2GradoFuncional)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			a = 1.0;
			b = 2.0;
			c = 1.0;
			Calculos();
			Assert::AreEqual(-1.0, calculo_final1, L"Error en la funcional Calculos : el resultado no es el esperado");
			Assert::AreEqual(-1.0, calculo_final2, L"Error en la funcional Calculos : el resultado no es el esperado");
		}
	};
}
