#include <iostream>
#include <iomanip>
#include <vector>
#include <chrono>

using namespace std;

int fib(int N)
{

  if (N == 0 || N == 1) return N;
  return fib(N-1) + fib(N-2);
  //////////////////////////////////////////
  // INSERT RECURSIVE IMPLEMENTATION HERE //
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

