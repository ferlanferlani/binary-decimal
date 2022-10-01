// convert binary to decimal

#include <iostream>
#include <cmath>

using namespace std;

// function prototype
int convert(long long);

int main() {

  long long n;
  
  cout << "---------------------";
  cout << "PROGRAM CONVERT ANGKA BINER KE DESIMAL";
  cout << "---------------------" <<endl;
  cout << "------------------------------------------" <<endl;
  cout << "Masukkan Angka Biner Anda : ";
  cin >> n;
  cout << n << " Dalam Binner = "<< convert(n) <<" Dalam Desimal"<<endl;
  cout << "------------------------------------------" <<endl;
  cout << "-------------------------------";
  cout << " PROGRAM FINISHED ";
  cout << "-------------------------------" <<endl;
  
  cin.get();
  return 0;
}

// function definition
int convert(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }
  
  return dec;
}
