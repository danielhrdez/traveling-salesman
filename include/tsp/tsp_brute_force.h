/**
 * @file tsp_brute_force.h
 * @author Daniel Hernandez de Leon (alu0101331720@ull.edu.es)
 * @brief Brute Force class to represent a Tsp Brute Force object
 * @version 0.1
 * @date 2022-04-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef BRUTE_FORCE_H_
#define BRUTE_FORCE_H_

#include "traveling_salesman.h"

class TspBruteForce : public TravelingSalesman {
 public:
  /**
   * @brief Construct a new Tsp Brute Force object
   * 
   * @param graph Graph of the problem
   */
  TspBruteForce(const Graph graph) : TravelingSalesman(graph) {};

  /**
   * @brief Destroy the Brute Force object
   * 
   */
  ~TspBruteForce() {};

  /**
   * @brief Solve the Traveling Salesman problem by brute force
   * 
   * @return Edge* 
   */
  Edge *Solve() const override;
};

#endif // BRUTE_FORCE_H_