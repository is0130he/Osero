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
    void checkAllPincerMovement(stone_status color,int location,Stone *table[],int *check);
    //上方向の石同士に挟めるものがあるか確認
    int checkOnPincerMovement(stone_status color,int location,Stone *table[]);
    int checkUnderPincerMovement(stone_status color,int location,Stone *table[]);
    int checkLeftPincerMovement(stone_status color,int location,Stone *table[]);
    int checkRightPincerMovement(stone_status color,int location,Stone *table[]);
    int checkLeftOnPincerMovement(stone_status color,int location,Stone *table[]);
    int checkRightOnPincerMovement(stone_status color,int location,Stone *table[]);
    int checkLeftUnderPincerMovement(stone_status color,int location,Stone *table[]);
    int checkRightUnderPincerMovement(stone_status color,int location,Stone *table[]);
    
    //石を挟む
    void changePincerMovement(int direction,stone_status color, int location,int pair_location,Stone *table[]);
};
#endif /* PincerMovement_hpp */
