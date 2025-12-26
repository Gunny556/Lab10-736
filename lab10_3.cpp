#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    ifstream source("score.txt");
    vector<double> scores;
    double x;
    
    while(source >> x){
        scores.push_back(x);
    }
    source.close();
    
    int n = scores.size();
    double sum = 0;
    for(int i=0; i<n; i++)
        sum += scores[i];
    
    double mean = sum / n;

    double sumSquare = 0;
    for(int i=0; i<n; i++)
        sumSquare += pow(scores[i] - mean, 2);
    double stddev = sqrt(sumSquare / n);

    cout << "Number of data = " << n << endl;
    cout <<  setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << stddev << endl;

    return 0;
}