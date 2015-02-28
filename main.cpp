#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include <Math.h>
using namespace std;

int main()
{

    int n,m,max=0;
    char c;
    cin>>n>>m;
    bool * successful = new bool[n];
    int * grades = new int[n * m];
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
             cin>>c;
             grades[n * m + j] = c - '0';
        }
        grades[i]='\n';
    }

    for(int i = 0 ; i < n ; i++)
	{
	    successful[n] = false;
	}

    for(int i = 0 ; i < m ; i++)
	{
        max = 0;
        for(int j = 0 ; j < n ; j++)
		{
			max =std::max(max, grades[j * m + m]);
		}
        for(int t = 0; t < n ; t++)
		{
			if(grades[t * m + m] == max)
			{
				successful[t] = true;
			}
		}
    }
    int total = 0;
    for(int i = 0; i < n ; i++)
	{
		total += successful[i];
	}
    cout<<total<<endl;
    return 0;
}
