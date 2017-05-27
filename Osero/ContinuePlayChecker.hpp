//
//  ContinuePlayChecker.hpp
//  Osero
//
//  Created by 西村　宗高 on 2017/05/27.
//  Copyright © 2017年 西村　宗高. All rights reserved.
//

#ifndef ContinuePlayChecker_hpp
#define ContinuePlayChecker_hpp
#include "PincerMovement.hpp"
#include <stdio.h>
class ContinuePlayChecker{
public:
    //置ける場所があるかチェック
    int checkContinuePlay(stone_status color,Stone *table[]);
    //テーブルが全て埋まっているかチェック
    bool checkAllUse(Stone *table[]);
};
#endif /* ContinuePlayChecker_hpp */
