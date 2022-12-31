//****************************************************************
//* This file is part of the AsFem framework
//* A Simple Finite Element Method program (AsFem)
//* All rights reserved, Yang Bai/M3 Group@CopyRight 2020-present
//* https://github.com/M3Group/AsFem
//* Licensed under GNU GPLv3, please see LICENSE for details
//* https://www.gnu.org/licenses/gpl-3.0.en.html
//****************************************************************
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++ Author : Yang Bai
//+++ Date   : 2022.05.14
//+++ Purpose: defines the base class of 3d shape functions in AsFem
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#pragma once

#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>

#include "Utils/MessagePrinter.h"
#include "MathUtils/Vector3d.h"

using std::vector;
using std::abs;
using std::sqrt;

/**
 * The base class for 3d lagrange shape function
 */
class ShapeFun3DBase{
public:
    /**
     * this virtual function responsible for the calculation of 1d shape function and its local derivatives
     * @param xi \f$\xi\f$ for local coordinate
     * @param eta \f$\eta\f$ for local coordinate
     * @param zeta \f$\zeta\f$ for local coordinate
     * @param t_shpvals the vector of shape function values
     * @param t_shpders the vector of shape function's local derivatives, \f$\frac{dN}{d\xi},\frac{dN}{d\eta},\frac{dN}{d\zeta}\f$
     */
    virtual void calc3DShapeValsAndDerivatives(const double &xi,const double &eta,const double &zeta,vector<double> &t_shpvals,vector<Vector3d> &t_shpders)=0;

};