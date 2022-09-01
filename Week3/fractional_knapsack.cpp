#include <iostream>
#include <vector>

using namespace std;
using std::vector;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
	double value = 0.0;

	int n = weights.size();
    vector<double> vw(n);
    
    for(int i = 0 ; i<n;i++)
    {
        vw[i] = double(values[i])/double(weights[i]);
    }
    double max_value = vw[0];
    int max_index = 0;
    while (capacity != 0)
    {
        for(int i = 0 ; i<n;i++)
        {
            if (max_value < vw[i])
            {
                max_value = vw[i];
                max_index = i;
            }
        
        }
        //cout<<max_value<<" "<<max_index<<endl;
        if (capacity>weights[max_index])
        {
            value += weights[max_index]*vw[max_index];
            capacity -= weights[max_index];
        }
        else
        {
            value += capacity*vw[max_index];
            capacity -= capacity;
        }
        vw.at(max_index) = 0;
        max_value=-1;
        //cout<<vw[max_index]<<endl;
        //cout<<capacity<<endl;
        //cout<<value<<endl;
        
    }
    
    

    
    return value;
}
int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
