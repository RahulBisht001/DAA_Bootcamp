#include <bits/stdc++.h>
using namespace std;
bool sortbySec(const pair<int, double> &a, const pair<int, double> &b)
{
    return a.second > b.second;
}

vector<pair<int, double>> priceEvaluator(vector<int> &w, vector<int> &p)
{
    vector<pair<int, double>> wp;
    for (int i{0}; i < w.size(); i++)
    {
        wp.push_back(make_pair(w[i], p[i] * 1.0 / w[i]));
    }
    sort(wp.begin(), wp.end(), sortbySec);
    return wp;
}

float fractionalKnapsack(vector<pair<int, double>> &wp, int capacity)
{
    vector<double> dp(capacity + 1, 0);
    for (int i{1}; i <= capacity; i++)
    {
        int cap = i;
        for (int j{0}; j < wp.size() && cap > 0; j++)
        {
            dp[i] += min({cap, wp[j].first}) * wp[j].second;
            cap -= min({cap, wp[j].first});
        }
    }
    return dp[capacity];
}

int main()
{
    int n, cap;
    cin >> n;
    vector<int> p(n, 0), w(n, 0);
    for (auto &x : p)
        cin >> x;
    for (auto &x : w)
        cin >> x;
    cin >> cap;
    auto wp = priceEvaluator(w, p);
    cout << fractionalKnapsack(wp, cap);
    return 0;
}