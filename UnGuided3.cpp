#include <iostream>
using namespace std;

int main()
{
    int data[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int n = 10;
    int target = 4;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (data[i] == target)
        {
            count++;
        }
    }
    cout << "data: {9, 4, 1, 4, 7, 10, 5, 4, 12, 4}" << endl;
    cout << "\nAngka " << target << " ditemukan sebanyak " << count << " angka." << endl;

    return 0;
}
