//
//  TableController.hpp
//  Osero
//
//  Created by 西村　宗高 on 2017/05/27.
//  Copyright © 2017年 西村　宗高. All rights reserved.
//

#ifndef TableController_hpp
#define TableController_hpp

#include <stdio.h>
#include "Table.hpp"

//上
#define ON -8
//下
#define UNDER 8
//右
#define RIGHT 1
//左
#define LEFT -1
//右上
#define RIGHT_ON (RIGHT + ON)
//左上
#define LEFT_ON (LEFT + ON)
//右下
#define RIGHT_UNDER (RIGHT + UNDER)
//左下
#define LEFT_UNDER (LEFT + UNDER)


class TableController : public Table{
public:
    //上側があるか確認
    bool checkOnPlace(int location);
    //下側があるか確認
    bool checkUnderPlace(int location);
    //左側があるか確認
    bool checkLeftPlace(int location);
    //右側があるか確認
    bool checkRightPlace(int location);
    //左上側があるか確認
    bool checkLeftOnPlace(int location);
    //右上側があるか確認
    bool checkRightOnPlace(int location);
    //左下側があるか確認
    bool checkLeftUnderPlace(int location);
    //右下側があるか確認
    bool checkRightUnderPlace(int location);
};
#endif /* TableController_hpp */
