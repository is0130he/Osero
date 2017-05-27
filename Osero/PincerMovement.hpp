//
//  PincerMovement.hpp
//  Osero
//
//  Created by 西村　宗高 on 2017/05/27.
//  Copyright © 2017年 西村　宗高. All rights reserved.
//

#ifndef PincerMovement_hpp
#define PincerMovement_hpp
#include <stdio.h>
#include"TableController.hpp"

class PincerMovement : public TableController{
public:
    void checkAllPincerMovement(stone_status color,int location,int *check);
    //上方向の石同士に挟めるものがあるか確認
    int checkOnPincerMovement(stone_status color,int location);
    int checkUnderPincerMovement(stone_status color,int location);
    int checkLeftPincerMovement(stone_status color,int location);
    int checkRightPincerMovement(stone_status color,int location);
    int checkLeftOnPincerMovement(stone_status color,int location);
    int checkRightOnPincerMovement(stone_status color,int location);
    int checkLeftUnderPincerMovement(stone_status color,int location);
    int checkRightUnderPincerMovement(stone_status color,int location);
    
    //石を挟む
    void changePincerMovement(int direction,stone_status color, int location,int pair_location,Stone *table[]);
};
#endif /* PincerMovement_hpp */
