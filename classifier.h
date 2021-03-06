#ifndef CLASSIFIER_H
#define CLASSIFIER_H

#include <iostream>
#include <sstream>
#include <fstream>
#include <math.h>
#include <vector>

using namespace std;

class GNB {
public:
  vector<string> possible_labels = {"left", "keep", "right"};

  // Constructor
  GNB();

  // Destructor
  virtual ~GNB();

  void train(vector<vector<double>> data, vector<string> labels);
    string predict(vector<double>);

private:
  vector<double> prior_probs_;
  vector<vector<double>> means_;      // Mean
  vector<vector<double>> variance_;   // Variance

};

#endif
