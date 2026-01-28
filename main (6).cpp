#include <iostream>
using namespace std;

int main () {
    int A[20], even[20], odd[20];
    int e = 0, o = 0;
    
    for (int i = 0; i < 20; i++)
         A[i] = i + 1;
    
    for (int i = 0; i < 20; i++)
    {
    if (A[i] % 2 == 0)
    even[e++] = A[i];
    else
    odd[o++] = A[i];
}

cout << "Even numbers: ";
for (int i =0; i < e; i++)
cout << even [i] << "";

cout <<"\nOdd numbers: ";
for(int i =0; i < o; i++)
cout << odd [i] <<"";

return 0;
}
    