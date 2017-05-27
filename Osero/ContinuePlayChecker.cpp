//
//  ContinuePlayChecker.cpp
//  Osero
//
//  Created by 西村　宗高 on 2017/05/27.
//  Copyright © 2017年 西村　宗高. All rights reserved.
//

#include "ContinuePlayChecker.hpp"

extern Stone *table[TABLE_SIZE];

//置ける場所があるかチェック
int ContinuePlayChecker::checkContinuePlay(stone_status color){
    //カウンタ変数
    int i,j;
    //返り値の受け取り
    int check[8];
    
    //全マス埋まっているかチェック
    bool use_check = checkAllUse();
    if(use_check == false){
        return false;
    }
    
    //インスタンス生成
    PincerMovement *pincer;
    pincer = new PincerMovement();
    //全マスチェック
    for(i=0;i<TABLE_SIZE;i++){
        //i座標の全方向チェック
        pincer->checkAllPincerMovement(color, i, check);
        for(j=0;j<8;j++){
            //置けるところがあれば
            if(check[i]>0){
                return i;
            }
        }
    }
    //置ける場所がなければ-1
    return -1;
}

//テーブルが全て埋まっているかチェック
bool ContinuePlayChecker::checkAllUse(){
    //カウンタ変数
    int i;
    stone_status status;
    for(i=0;i<TABLE_SIZE;i++){
        status = table[i]->getStatus();
        if(status == nothing){
            return false;
        }
    }
    return true;
}
