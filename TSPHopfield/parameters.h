//
//  parameters.h
//  TSPHopfield
//
//  Created by Ryota Ishidu on 2017/10/23.
//  Copyright © 2017年 Ryota Ishidu. All rights reserved.
//

#ifndef parameters_h
#define parameters_h
#include <vector>

#define RECALL_TIME 10000
#define DELTA_T 0.01
#define NOISE 0.001
#define U0 0.02
#define A 500.0
#define B 500.0
#define C 200.0
#define D 500.0
#define N 15.0

const std::vector<std::vector<double>> cities = {
    { 0.5, 0.9 },
    { 0.2, 0.8 },
    { 0.4, 0.5 },
    { 0.15, 0.25 },
    { 0.25, 0.1 },
    { 0.6, 0.3 },
    { 0.65, 0.3 },
    { 0.9, 0.35 },
    { 0.7, 0.5 },
    { 0.9, 0.7 }
};

#endif /* parameters_h */


