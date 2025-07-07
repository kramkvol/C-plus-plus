const int n=3;
void show(int M[n][n])
{
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cout << " "<< M[i][j] << " ";
        }
        cout << endl;
    }
     cout << endl;
}
int main()
{
    system("chcp 1251 > nul");
    int A[n][n] = {{1, -2, -1}, {2, 0, -1}, {2, 3, -1}};
    cout << "Матрица A: "<< endl;
    show(A);

    int B [n][n] = {{2, 1, 1}, {1, 3, 1}, {-2, 1, 4}};
    cout << "Матрица B: "<< endl;
    show(B);

    int C[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            C[i][j] = 0;
            for(int k = 0; k < n; k++)
            {
                C[i][j] += A[i][k] + B[j][k];
            }
        }
    }
    cout << "Матрица C = A*B: " << endl;
    show(C);
}
