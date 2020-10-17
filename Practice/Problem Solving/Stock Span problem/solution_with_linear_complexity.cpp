#include <iostream>
#include <stack>
using namespace std;

void calculateSpan(int price[], int n, int s[])
{
    stack<int> st;
    st.push(0);

    s[0] = 1; // Span value of 1st element is always 1.

    for (int i = 1; i < n; i++)
    {
        while (!st.empty() && price[st.top()] <= price[i])
            st.pop();

        s[i] = (st.empty()) ? (i + 1) : (i - st.top());
        st.push(i);
    }

    cout << "Biggest Span : " << st.top() << endl;
}

int main()
{
    int price[] = {10, 4, 5, 90, 120, 80};
    int n = sizeof(price) / sizeof(int);
    int s[n];

    calculateSpan(price, n, s);

    return 0;
}