//
//  PlayMode.cpp
//  Osero
//
//  Created by 西村　宗高 on 2017/05/27.
//  Copyright © 2017年 西村　宗高. All rights reserved.
//

#include "PlayMode.hpp"

extern Stone *table[TABLE_SIZE];

void mainLoutine(){
    //インスタンス生成
    Table *table_instance;
    table_instance = new Table();
    int length;
    length = table_instance->getSideLength();
    
    //テーブルの生成
    table_instance->createTable();
}
