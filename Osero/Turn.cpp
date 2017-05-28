//
//  Turn.cpp
//  Osero
//
//  Created by 西村　宗高 on 2017/05/27.
//  Copyright © 2017年 西村　宗高. All rights reserved.
//

#include "Turn.hpp"

extern Stone *table[];

//ユーザのターン
void Turn::userTurn(stone_status user_color){
    int user_coordinate;
    //インスタンス生成
    PincerMovement *pincer_instance;
    pincer_instance = new PincerMovement();
    Table *table_instance;
    table_instance = new Table();
    //ループフラグ
    bool flag = false;
    
    //ユーザのターンであることを表示
    printf("ユーザのターンです\n");
    
    //石が置けるかチェック用の変数
    int check[8];
    
    do{
        //ユーザ入力により座標取得
        user_coordinate = getCoordinate();
        //石が置けるか確認
        pincer_instance->checkAllPincerMovement(user_color, user_coordinate, check);
        //方向レベルで置けるかチェック
        flag = checkPincerMovement(check);
        //置けない座標だった場合
        if(flag == false){
            printf("\nこの座標には置けません\nもう一度入力してください\n\n");
        }
        //置ける場合
        else{
            //テーブルを更新
            pincer_instance->updatePinceredTable(user_color, user_coordinate, check);            //テーブルを出力
            table_instance->dispTable();
        }
    }while(flag == false);
    
    //ユーザのターンであることを表示
    printf("これでユーザのターン終了です\n");
}

//石が置けるかチェック
bool Turn::checkPincerMovement(int *check){
    //カウンタ変数
    int i;
    for(i=0;i<8;i++){
        //方向レベルで置けるかチェック
        if(check[i]==true){
            return true;
        }
    }
    //一つも挟める方向がない場合
    return false;
}
//ユーザ入力により座標位置を取得
int Turn::getCoordinate(void){
    int user_coordinate;
    char user_input[4];
    //'\n'と'\0'を考慮して
    //ユーザからの入力を取得
    while(1){
        printf("石を置く場所を入力してください(0~63):");
        fgets(user_input,2,stdin);
        user_input[2] = '\0';
        user_coordinate = atoi(user_input);
    
        if((0<=user_coordinate)&&(user_coordinate<TABLE_SIZE)){
            return user_coordinate;
        }
        else{
            printf("\n\n0~63ではありません。もう一度入力してください。\n\n");
        }
    }
}

//cpuのターン
void Turn::aiTurn(stone_status user_color){
    //インスタンス生成
    PincerMovement *pincer_instance;
    pincer_instance = new PincerMovement();
    Table *table_instance;
    table_instance = new Table();
    //ループフラグ
    bool flag = false;
    //カウンタ変数
    int i;
    
    //AIのターンであることを表示
    printf("AIのターンです\n");
    
    //石が置けるかチェック用の変数
    int check[8];
    
    //上から座標チェック
    for(i=0;(i<TABLE_SIZE)&&(flag == false);i++){
        //石が置けるか確認
        pincer_instance->checkAllPincerMovement(user_color, i, check);
        //方向レベルで置けるかチェック
        flag = checkPincerMovement(check);
        //置ける座標だった場合
        if(flag == true){
            //テーブルを更新
            pincer_instance->updatePinceredTable(user_color, i,check);
            //テーブルを出力
            table_instance->dispTable();
        }
    }
    //AIのターンであることを表示
    printf("これでAIのターン終了です\n");
}
