//
//  Stone.hpp
//  Osero
//
//  Created by 西村　宗高 on 2017/05/27.
//  Copyright © 2017年 西村　宗高. All rights reserved.
//

#ifndef Stone_hpp
#define Stone_hpp

#include <stdio.h>

//石の状態
enum stone_status{
    nothing = 0,
    white = 1,
    black = 2
};


class Stone{
private:
    //状態
    stone_status status;
public:
    //デフォルトコンストラクタ
    Stone();
    Stone(stone_status status);
    //デストラクタ
    ~Stone();
    //石の状態のゲッター
    stone_status getStatus(void);
    //石の状態のセッター
    void setStatus(stone_status status);
    //石の出力
    void printStone(int location,Stone *table[]);
    //逆の石の色を確認
    stone_status checkReverseColor(stone_status color);
};
#endif /*Stone_hpp*/ 
