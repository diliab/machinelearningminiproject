# Linear Regression in C++

A mini machine learning project using linear regression in C++. 
 The model predicts tree health based on ambient temperature, trained using gradient descent.


## Overview

Given a set of temperature and tree health measurements, the model fits a line:

tree_health = m * temperature + b

The program learns the values of m (slope) and b (intercept) that best fit the data by minimizing prediction error through gradient descent.

## How it works

The project is broken into four core functions:

- **`predict(temperature, m, b)`** — computes a predicted tree_health value for a given temperature, using the current model parameters.
- **`squaredError(predicted, actual)`** — measures how far off a single prediction was from the true value.
- **`calcMSE(temperatures, health, m, b)`** — computes the Mean Squared Error across the entire dataset for the current `m` and `b`, or in simpler terms how good the current line is overall.
- **`train(temperatures, health, m, b, learning_rate, epochs)`** — runs gradient descent: repeatedly loops through the dataset, computes the gradient of the error with respect to `m` and `b`, and nudges them in the direction that reduces error. Repeats for a set number of epochs until the model converges.

`main` ties these together: it initializes `m` and `b`, calls `train` on the dataset, and prints the final learned equation.
## Build & Run

```bash
g++ main.cpp -o regression
./regression
```

## What I learned

This project was my introduction to the core ideas behind machine learning: 
cost functions, gradient descent, and how a model "learns" by iteratively minimizing error rather than being solved directly. 
Implementing it in C++ from scratch (rather than using a library) forced me to understand what's actually happening at each step. 