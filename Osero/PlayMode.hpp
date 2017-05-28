//
//  PlayMode.hpp
//  Osero
//
//  Created by 西村　宗高 on 2017/05/27.
//  Copyright © 2017年 西村　宗高. All rights reserved.
//

#ifndef PlayMode_hpp
#define PlayMode_hpp

#include <stdio.h>
#include"Table.hpp"
#include "ContinuePlayChecker.hpp"
#include "Turn.hpp"
class PlayMode{
public:
    void mainLoutine(void);
    void playFirst_User(void);
    void drawFirst_User(void);
};
//test
#endif /*PlayMode_hpp*/
