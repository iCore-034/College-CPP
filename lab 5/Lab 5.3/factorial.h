#pragma once
int fact(double fact) {
	int num_fact = 1;
	int fact_minus = fact;
	for (int i = 0; i < fact; i++)
	{
		if (fact > 0)
		{
			num_fact *= fact_minus;
			fact_minus--;
		}
	}
	return num_fact;
}