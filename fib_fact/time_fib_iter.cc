#include <iostream>
#include <iomanip>

#include <chrono>

using namespace std;

int fib(int N)

{   
    if (N == 0) return 0;
    if (N == 1) return 1;

    int prev1 = 0, prev2 = 1, cur = 0;
    for (int i = 2; i <=N; ++i)
    {
    cur = prev1 + prev2;
    prev1 = prev2;
    prev2 = cur;
    }
  //////////////////////////////////////////
  // INSERT ITERATIVE IMPLEMENTATION HERE //
  //////////////////////////////////////////
}

int main ()
{
  for (int N=0; N<45; ++N)
  {

    auto start = chrono::high_resolution_clock::now();

    int f = fib(N);

    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration<double>(end-start).count();

    cout << "N=" << setw(2) << N << " "
         << "F(N)=" << setw(10) << f << " "
         << "elapsed=" << scientific << setprecision(6) << elapsed << " [sec]" << endl;
  }

  return 0;
}

