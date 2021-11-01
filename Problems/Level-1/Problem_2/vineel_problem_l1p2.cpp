#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, temp;
    cin >> n;
    vector<int> vect;
    for(int i = 0; i< n; ++i)
    {
        cin >> temp;
        if(i%2 == false && temp%2 == false) vect.push_back (temp);
    }
    if (vect.size() == 0)
    {
        cout << "None"<< '\n';
        return 0;
    }
    for(auto x: vect)
    {
        cout << x << ' ';
    }
    cout << '\n';
}