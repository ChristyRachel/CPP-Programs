#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int temp = (N%2);
    if ((temp == 1) || (temp == 0 && N>5 && N<21) )
        cout << "Weird" << endl;
    else
        cout << "Not Weird" << endl;

    return 0;
}
