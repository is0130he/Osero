//
//  Stone.cpp
//  Osero
//
//  Created by 西村　宗高 on 2017/05/27.
//  Copyright © 2017年 西村　宗高. All rights reserved.
//

#include "Stone.hpp"


//デフォルトコンストラクタ
Stone::Stone(stone_status status){
    this->status = status;
}
//デストラクタ
Stone::~Stone(){}

//石の状態のゲッター
stone_status Stone::getStatus(void){
    return this->status;
}
//石の状態のセッター
void Stone::setStatus(stone_status status){
    this->status = status;
}
