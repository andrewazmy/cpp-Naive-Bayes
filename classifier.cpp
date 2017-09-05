#include <iostream>
#include <sstream>
#include <fstream>
#include <math.h>
#include <vector>
#include "classifier.h"

// Initializes GNB
GNB::GNB() {

}


GNB::~GNB() {}


void GNB::train(vector<vector<double>> data, vector<string> labels) {
/*
 * Trains the classifier with N data points and labels.
 * INPUTS
 * data - array of N observations
 * - Each observation is a tuple with 4 values: s, d, s_dot and d_dot.
 * - Example :  [
 *                [3.5, 0.1, 5.9, -0.02],
 *                [8.0, -0.3, 3.0, 2.2],
 *                ...
 *              ]
 *
 *  labels - array of N labels
 *  - Each label is one of "left", "keep", or "right".
 */

  const unsigned int num_features = data[0].size();
  const unsigned int num_classes  = this->possible_labels.size();

  // Stores how many elements of class presented in dataset
  vector<int> labels_distrib (num_classes, 0);

  this->prior_probs_.resize(num_classes);
  this->means_.resize(num_classes);
  this->stds_.resize(num_classes);

  // Init means and stds
  for (size_t i = 0; i < means_.size(); ++i) {
    for (size_t j = 0; j < num_features; ++j){
      this->means_[i].push_back(0.);
      this->stds_[i].push_back(0.);
    }
  }


}


string GNB::predict(vector<double> sample)
{
/*
 * Once trained, this method is called and expected to return
 * a predicted behavior for the given observation.
 *
 * INPUTS
 *
 * observation - a 4 tuple with s, d, s_dot, d_dot.
 * - Example: [3.5, 0.1, 8.5, -0.2]
 *
 * OUTPUT
 *
 * A label representing the best guess of the classifier. Can
 * be one of "left", "keep" or "right".
*/

  return this->possible_labels[1];

}
