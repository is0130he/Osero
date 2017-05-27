//
//  Turn.hpp
//  Osero
//
//  Created by 西村　宗高 on 2017/05/27.
//  Copyright © 2017年 西村　宗高. All rights reserved.
//

#ifndef Turn_hpp
#define Turn_hpp

#include <stdio.h>
#include<stdlib.h>
#include "Stone.hpp"
#include "Table.hpp"
#include "PincerMovement.hpp"
class Turn{
public:
    //ユーザのターン
    void userTurn(stone_status user_color);
    //AIのターン
//    void aiTurn(stone_status color);
    //ユーザ入力により座標を取得
    int getCoordinate(void);
    //石が置けるかチェック
    bool checkPincerMovement(int *check);
};
#endif /* Turn_hpp */
