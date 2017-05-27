//
//  Stone.cpp
//  Osero
//
//  Created by 西村　宗高 on 2017/05/27.
//  Copyright © 2017年 西村　宗高. All rights reserved.
//

#include "Stone.hpp"

extern Stone *table[TABLE_SIZE];

//デフォルトコンストラクタ
Stone::Stone(){}
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
//石の出力
void Stone::printStone(int location){
    stone_status status;
    
    status = table[location]->getStatus();
    //白の場合
    if(status == white){
        printf("○");
    }
    else if(status == black){
        printf("●");
    }
    else{
        printf(" ");
    }
}

//逆の石の色を確認
stone_status Stone::checkReverseColor(stone_status color){
    if(color == white){
        return black;
    }
    else if(color == black){
        return white;
    }
    //色がないなら返さない
    else{
        return nothing;
    }
}
