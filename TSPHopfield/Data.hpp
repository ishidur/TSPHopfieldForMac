//
//  Data.hpp
//  TSPHopfield
//
//  Created by Ryota Ishidu on 2017/10/23.
//  Copyright © 2017年 Ryota Ishidu. All rights reserved.
//

#ifndef Data_hpp
#define Data_hpp

#include <stdio.h>
#include "parameters.h"
#include "Eigen/Core"

class Data
{
public:
    Eigen::MatrixXd weight_mtrx;
    Eigen::VectorXd biases;
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW;
    Data();
    void load();
};
#endif /* Data_hpp */


