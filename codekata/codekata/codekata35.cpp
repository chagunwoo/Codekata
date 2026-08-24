#include <iostream>
using namespace std;

int main()
{
    int n, m;
    string s;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            s += '*';
        }
        cout << s << endl;
        s = "";

    }

    return 0;
}