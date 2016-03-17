//============================================================================
// Name        : ayman.cpp
// Author      : Ayman Mostafa
// Email       : ayman93live@hotmail.com
// Version     : v5.0
//============================================================================

#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>

using namespace std;

#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()

void fastInOut();

//##########################################################################################
//###################################MAIN FUNCTION##########################################
//##########################################################################################
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "rt", stdin);
//freopen("output.txt", "wt", stdout);
#endif
	fastInOut();
//----------------------------------------------------------------------------------
//----------------------------------------------------------------------------------
// 10114 - Loansome Car Buyer
	int a, max, x, d, k, m;
	double b, c, p, r, y, g;
	while (cin >> a && a >= 0) {
		cin >> b >> c >> d;

		p = c + b;
		r = c / a;
		max = a;
		m = 0;
		k = -1;
		g = -1;
		while (d--) {
			cin >> x >> y;
			if (x == m) {
				p = p - (y * p);

				if (p > c) {
					if (x < max)
						max = x;

				}
				m++;
				c -= r;

			} else {
				while (x - k) {
					if (x - k == 1) {

						p = p - (y * p);
					} else {

						p = p - (g * p);

					}
					if (p > c) {
						if (k + 1 < max)
							max = k + 1;
					}
					m++;
					c -= r;
					k++;

				}
			}
			k = x;
			g = y;
		}
		if (max == a) {

			while ((a - x) != 0) {
				x++;
				p = p - (y * p);
				if (p > c) {
					if (x < max)
						max = x;
					break;
				}

				c -= r;

			}
		}
		if (a == 0)
			cout << "0 months" << endl;
		else {

			if (max != 1)
				cout << max << " months" << endl;
			else
				cout << max << " month" << endl;
		}
	}
}
void fastInOut() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
}
