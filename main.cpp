#include <iostream>
#include <vector>
using namespace std;

//temperatures are variable type double, real numbers ranging from [60-100] degrees Fahrenheit
 vector<double> temperatures = {72.0, 85.1, 95.9, 60.0, 102.3, 62.7, 100.2, 80.7};
vector<double> tree_health  = {90.8, 75.0, 50.1, 95.0,  30.0, 91.2, 30.2, 60.0};


//slope and y-intercept values for the line
double m = 0.0;
double b = 0.0;

/* prediction function for tree health: predicted_health = m * temperature + b
 - takes parameters double temp, double m (slope), and double b (intercept)
 - returns predicted health value as a double
 */

//defining a predict function, will be used as a simple calculation function (will be called in training function)
//predicts the tree health value
double predict(double temperature, double m, double b) {
    double predictedHealth = m * temperature + b;
    return predictedHealth;
}

// defining a squared error function, another calculation function that will be used for the training function
double squaredError(double predicted, double actual) {
    double squared = (predicted - actual) * (predicted - actual);
    return squared;
}

// defining the mean squared error function,
double calcMSE(const vector<double>& temperatures, const vector<double>& health, double m, double b) {
    double total = 0.0;
    int n = temperatures.size();
    for (int i = 0; i < n; i++) {
        double calculated  = predict(temperatures[i], m, b);
        total += squaredError(calculated, health[i]);
        }

    double MSE = total / n;
    return MSE;
}

//defining a training function, will use all the previous calculation functions, gradient descent
int train(const vector<double>& temperatures,const vector<double> double m, double b) {




}

int main() {


}