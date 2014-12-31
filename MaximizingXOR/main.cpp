//
//  main.cpp
//  MaximizingXOR
//
//  Created by Raquel Alvarez on 12/31/14.
//  Copyright (c) 2014 R. All rights reserved.
//
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/*
 * Complete the function below.
 */
int maxXor(int l, int r)
{
    int maxV = -1000;
    int iXorj = 0;
    
    for (int i = l; i <= r; i++)
    {
        for (int j = i; j <= r; j++)
        {
            iXorj = i^j;
            maxV = (iXorj > maxV) ? iXorj:maxV;
        }
    }
    return maxV;
}

int main() {
    int res;
    int _l;
    cin >> _l;
    
    int _r;
    cin >> _r;
    
    res = maxXor(_l, _r);
    cout << res;
    
    return 0;
}