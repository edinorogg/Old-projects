#include <iostream>
#include <cstdlib>
#include <omp.h>
#include <ctime>
using namespace std;
int main(int argc, char **argv)
{
    srand(time(NULL));
    const int size = 10000;
    int** matrix = new int* [size];
    int** matrix2 = new int* [size];
    int** matrixend = new int* [size];

    int i;
    for (int i = 0; i < size; i++) 
    {
        matrix[i] = new int[size];
        matrix2[i] = new int[size];
        matrixend[i] = new int[size];
    }
    int j;
    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size; j++) 
        {
            matrix[i][j] = 1;
            matrixend[i][j] = 1;
        }
    }
    int k;
        for (int a = 1; a <= 16; a *= 2)
    {
        omp_set_num_threads(a);
        int start = clock();

#pragma omp parallel for shared(matrix, matrix2, matrixend) private(i, j, k) schedule(dynamic, 10)
        for (i = 0; i < size; i++) 
        {
            for (j = 0; j < size; j++) 
            {
                matrixend[i][j] = 0;
                for (k = 0; k < size; k++) 
                {
                    matrixend[i][j] += (matrix[i][k] * matrix2[k][j]);
                }
            }
        }
        int end = clock();
        int search = end - start;
        cout << a << " streams" << "\nCompletion time: " << search << endl;
    }
    return 0;
}