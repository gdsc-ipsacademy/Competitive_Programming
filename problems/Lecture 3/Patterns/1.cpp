#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter No of rows and cols";
    cin >> n;

    for (int row = 0; row < n; row++) // rows
    {
        for (int col = 0; col < n; col++) // cols
        {
            cout << "*";
            cout << " ";
        }
        cout << endl;
    }
}

/*
Enter No of rows and cols9
* * * * * * * * *
* * * * * * * * *
* * * * * * * * *
* * * * * * * * *
* * * * * * * * *
* * * * * * * * *
* * * * * * * * *
* * * * * * * * *
* * * * * * * * *

*/