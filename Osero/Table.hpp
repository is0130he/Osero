//
//  Table.hpp
//  Osero
//
//  Created by 西村　宗高 on 2017/05/27.
//  Copyright © 2017年 西村　宗高. All rights reserved.
//

#ifndef Table_hpp
#define Table_hpp

#include <stdio.h>
#include"Stone.hpp"

//一辺の長さ
#define SIDE_LENGTH 10
//テーブル配列のサイズ
#define TABLE_SIZE 64
//テーブル情報
Stone *table[TABLE_SIZE];

class Table{
    
private:
    //一辺の長さ
    const int side_length = 8;
public:
    //テーブル生成
    bool createTable(Stone *table[]);
    //一辺の長さのゲッター
    int getSideLength();
    //座標のゲッター
    bool checkCoordinate(int coordinate);
};

#endif /*Table_hpp*/

/*
 *機能概要 :
 *機能詳細 :
 *@author
 *@version
 *@param
 *@return
 */
