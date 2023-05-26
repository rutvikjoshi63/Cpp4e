#include <iostream>
#include <math.h>
using namespace std;

int Sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int prevsum = Sum(n - 1);
    return n + prevsum;
}
int Power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    int prevproduct = Power(n, p - 1);
    return n * prevproduct;
}
int Factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * Factorial(n - 1);
}
int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        cout << n << ",";
        return n;
    }

    int p = fibonacci(n - 1) + fibonacci(n - 2);
    cout << p << ",";
    return p;
}
/*Rat in Maze-Backtracking*/
bool isSafe(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool ratinMaze(int **arr, int x, int y, int n, int **solArr)
{

    if (x == n - 1 && y == n - 1)
    {
        solArr[x][y] = 1;
        return true;
    }

    if (isSafe(arr, x, y, n))
    {
        solArr[x][y] = 1;
        if (ratinMaze(arr, x + 1, y, n, solArr))
        {
            return true;
        }
        if (ratinMaze(arr, x, y + 1, n, solArr))
        {
            return true;
        }
        solArr[x][y] = 0;
        return false;
    }
    return false;
}

int main()
{
    // int n,p;
    // cout<<"n";
    // cin>>n;
    // // cout<<Sum(n);
    // // cout<<"p";
    // // cin>>p;
    // // cout<<Power(n,p);
    // // cout<<Factorial(n);
    // cout<<fibonacci(n);
    /*Rat in Maze-Backtracking*/

    int n;
    cin >> n;

    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int **solArr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        solArr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            solArr[i][j] = 0;
        }
    }
    if (ratinMaze(arr, 0, 0, n, solArr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << solArr[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}

// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1