#include <bits/stdc++.h>
using namespace std;


int nextFit(int w[], int n, int c)
{
	int res = 0, rem = c;

	for (int i = 0; i < n; i++) {
		if (w[i] > rem) {
			res++; 
			rem = c - w[i];
		}
		else
			rem -= w[i];
	}
	return res;
}
int firstFit(int weight[], int n, int c)
{
    // Initialize result (Count of bins)
    int res = 0;
 
    // Create an array to store remaining space in bins
    // there can be at most n bins
    int bin_rem[n];
 
    // Place items one by one
    for (int i = 0; i < n; i++) {
        // Find the first bin that can accommodate
        // weight[i]
        int j;
        for (j = 0; j < res; j++) {
            if (bin_rem[j] >= weight[i]) {
                bin_rem[j] = bin_rem[j] - weight[i];
               
                break;
            }
        }
 
        // If no bin could accommodate weight[i]
        if (j == res) {
            bin_rem[res] = c - weight[i];
            res++;
        }
       
    }
    return res;
}


int main()
{
	int w[] = { 6,5,4,3,2,1 };
	int c = 10;
	int n = sizeof(w) / sizeof(w[0]);
	cout << "Bins required in Next Fit : "<< nextFit(w, n, c)<<endl;
	cout << "Bins required in First Fit : "<< firstFit(w, n, c)<<endl;
	return 0;
}
