// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

vector<long long> nextLargerElement(vector<long long> a, int n)
{
    int nge[n];
    nge[n - 1] = -1;
    stack<long long> st;
    st.push(a[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        while (st.size() and a[i] >= st.top())
        {
            st.pop();
        }
        if (st.size() == 0)
        {
            nge[i] = -1;
        }
        else
        {
            nge[i] = st.top();
        }
        st.push(a[i]);
    }

    vector<long long> v;

    for (int i = 0; i < n; i++)
    {
        v.push_back(nge[i]);
    }
    return v;
}