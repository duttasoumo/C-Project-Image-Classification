// moph_project.cpp : Defines the entry point for the console application.
//

#include "matrix.h"

int cardinality(Matrix& m) {
	int rows = m.get_rows_;
	int cols = m.get_cols_;
	int i, j; int count = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			if (m(i,j) == 1)
			{
				count++;
			}
		}
	}
	return count;
}
int isNull(Matrix& m)
{
	return cardinality(m) == 0;
}

Matrix& multi_open(Matrix& m1, Matrix& m2) {
	Matrix& Z();
	if (!isNull(m1)) {
		//z = open(m1, m2);
	}
}