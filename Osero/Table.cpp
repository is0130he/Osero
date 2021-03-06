//
//  Table.cpp
//  Osero
//
//  Created by 西村　宗高 on 2017/05/27.
//  Copyright © 2017年 西村　宗高. All rights reserved.
//

#include "Table.hpp"

/*
*機能概要 : テーブル生成
*機能詳細 : テーブルに初期値を設定する
*@author : 西村 宗高
*@version : 1
*@param : table(テーブル情報)
*@return : 成功(true)
*/

//テーブル情報
Stone *table[TABLE_SIZE];

bool Table::createTable(){
    //カウンタ変数
    int i;
    for(i=0;i<TABLE_SIZE;i++){
        //初期の4つの石を置いておく
        if((i == 27)||(i == 36)){
            table[i] = new Stone(white);
        }
        else if((i == 28)||(i == 35)){
            table[i] = new Stone(black);
        }
        else{
            table[i] = new Stone(nothing);
        }
    }
    //生成に成功したらtrue
    return true;
}
/*
 *機能概要 : 一辺の長さのゲッター
 *機能詳細 : 一辺の長さのゲッター
 *@author : 西村宗高
 *@version : 1
 *@param : なし
 *@return : 一辺の長さ
 */

int Table::getSideLength(){
    return this->side_length;
}

/*
 *機能概要 : 座標位置のチェッカー
 *機能詳細 : 座標位置が0~63であるかのチェック
 *@author : 西村宗高
 *@version : 1
 *@param : coordinate(座標)
 *@return : true(適切な座標),false(不適切なデータ)
 */
bool checkCoordinate(int coordinate){
    //指定座標範囲にあるかチェック
    if((0<=coordinate)&&(coordinate < TABLE_SIZE)){
        return true;
    }
    return false;
}

void Table::dispTable(){
    //カウンタ変数
    int side,length;
    //テーブルの辺
    const int table_length = this->getSideLength();
    //インスタンス生成
    Stone *stone_instance;
    stone_instance = new Stone();
    
    //横を広げる
    printf("         ");
    //列番号
    for(side = 0;side < table_length; side++){
        printf("%d",side);
    }
    printf("\n");
    for(length = 0; length < table_length; length++){
        //横を広げる
        printf("        ");
        //行番号
        printf("%d",length);
        for(side = 0;side < table_length;side++){
            //石の出力
            stone_instance->printStone(side + length * table_length);
        }
        printf("\n");
    }
    
    //上との間を開ける
    for(length=0;length < 5;length++){
        printf("\n");
    }
}

