#include <iostream>
#include <deque>

using namespace std;

deque<int> q;
deque<int>::iterator it;
int csize;

void implement(int x)
{
    if (q.size() == csize)
    {
        if (std::find(q.begin(), q.end(), x) != q.end())
        {
            for (it = q.begin(); it != q.end(); it++)
            {
                if ((*it) == x)
                {
                    q.erase(it);
                }
            }
        }
        else
        {
            q.pop_front();
        }
    }

    q.push_back(x);
}

int main()
{
    cout << "Enter frame size : ";
    cin >> csize;
    int x;
    char ch;

    while (true)
    {
        cout << "Enter value : ";
        cin >> x;
        implement(x);
        cout << "More values?(y/n)";
        cin >> ch;
        if (ch == 'n')
            break;
    }

    for (it = q.begin(); it != q.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}