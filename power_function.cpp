double power_function(double x, int exponent)
{
	double result = 1.0F;
	for (int i = 0; i < exponent; i++)
	{
		result = result * x;
	}
	return result;
}