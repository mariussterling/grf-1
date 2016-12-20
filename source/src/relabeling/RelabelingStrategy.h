//
// Created by Julie Noelle Tibshirani on 10/30/16.
//

#ifndef RANGER_RELABELINGSTRATEGY_H
#define RANGER_RELABELINGSTRATEGY_H


#include <utility/Data.h>
#include <unordered_map>
#include <vector>

class RelabelingStrategy {
public:
  virtual std::unordered_map<size_t, double> relabelObservations(
      std::unordered_map<std::string, std::vector<double>> *observations,
      std::vector<size_t> &nodeSampleIDs) = 0;
};


#endif //RANGER_RELABELINGSTRATEGY_H