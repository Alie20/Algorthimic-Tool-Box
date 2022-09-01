#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;

int compute_min_refills(int dist, int tank, vector<int> & stops) {
    // write your code here
	int count  = 0;
	int last_stop_value = 0;
	int index = 0;
	
	stops.push_back(dist);
	while(index <stops.size())
	{
		if (stops[index] - last_stop_value <= tank)
		{
			index ++;
			continue;
		}
		else if ((stops[index] - stops[index-1]) > tank || index == 0 )
		{
			return -1;
		}
		else
		{
			last_stop_value = stops[index-1];
			stops +=1;
		}
	}
	
	return stops;
}
int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}
