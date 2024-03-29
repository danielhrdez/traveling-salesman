/**
 * @file random_graph.h
 * @author Daniel Hernandez de Leon (alu0101331720@ull.edu.es)
 * @brief Random Graph class to represent a Graph object
 * @version 0.1
 * @date 2022-04-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "graph.h"

class RandomGraph {
 public:
  /**
   * @brief Construct a new Random Graph:: Random Graph object
   * 
   * @param number_of_nodes Number of nodes of the graph
   */
  Graph Generate(int number_of_nodes);
};
