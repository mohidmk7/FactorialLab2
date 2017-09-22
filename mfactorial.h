//Header file for factorial program
//https://github.com/mohidmk7/FactorialLab2

class mfactorial											//factorial class
{
public:
	double factorial(double input)							//recursive factorial function
	{
		double n = 0;										
		if (input == 0)										//zero factorial is one [ 0!=1  ]
		{
			return 1;
		}
		else
		{
			n = input * factorial(input - 1);				//recall to function
			return n;										
		}
	}
};