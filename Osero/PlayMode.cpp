//
//  PlayMode.cpp
//  Osero
//
//  Created by 西村　宗高 on 2017/05/27.
//  Copyright © 2017年 西村　宗高. All rights reserved.
//

#include "PlayMode.hpp"

extern Stone *table[TABLE_SIZE];

void PlayMode::mainLoutine(){
    //インスタンス生成
    Table *table_instance;
    table_instance = new Table();
    ContinuePlayChecker *continue_play_instance;
    continue_play_instance = new ContinuePlayChecker();
    Turn *turn_instance;
    turn_instance = new Turn();
    Stone *stone_instance;
    stone_instance = new Stone();
    
    stone_status user_color = black;
    
    //テーブルの生成
    table_instance->createTable();
    
    //先攻(黒)・後攻(白)の決定
    //user_color = ;
    
    //ユーザが先行の場合
    if(user_color == black){
        playFirst_User();
    }
    //ユーザが後攻の場合
    else{
        drawFirst_User();
    }
}

void PlayMode::playFirst_User(){
    //カウンタ変数
    int i;
    bool user_pass = true,ai_pass = true;
    //インスタンス生成
    ContinuePlayChecker *continue_play_instance;
    continue_play_instance = new ContinuePlayChecker();
    Turn *turn_instance;
    turn_instance = new Turn();
    Stone *stone_instance;
    stone_instance = new Stone();
    
    stone_status user_color = black,ai_color = stone_instance->checkReverseColor(user_color);
    
    for(i=0;(i<TABLE_SIZE)&&(user_pass || ai_pass);i++){
        //テーブルに石を置けるか確認
        user_pass = continue_play_instance->checkContinuePlay(user_color);
        if(user_pass == true){
            //ユーザのターン
            turn_instance->userTurn(user_color);
        }
        else{
            printf("\n\n置けないのでパスします\n\n");
        }
        //テーブルに石を置けるか確認
        ai_pass = continue_play_instance->checkContinuePlay(user_color);
        if(ai_pass == true){
            //aiのターン
            turn_instance->aiTurn(ai_color);
        }
        else{
            printf("\n\n置けないのでパスします\n\n");
        }
    }

}

void PlayMode::drawFirst_User(){
    //カウンタ変数
    int i;
    bool user_pass = true,ai_pass = true;
    //インスタンス生成
    ContinuePlayChecker *continue_play_instance;
    continue_play_instance = new ContinuePlayChecker();
    Turn *turn_instance;
    turn_instance = new Turn();
    Stone *stone_instance;
    stone_instance = new Stone();
    
    stone_status user_color = white,ai_color = stone_instance->checkReverseColor(user_color);
    
    for(i=0;i<=30;i++){
        //テーブルに石を置けるか確認
        ai_pass = continue_play_instance->checkContinuePlay(user_color);
        if(ai_pass == true){
            //aiのターン
            turn_instance->aiTurn(ai_color);
        }
        else{
            printf("\n\n置けないのでパスします\n\n");
        }
        //テーブルに石を置けるか確認
        user_pass = continue_play_instance->checkContinuePlay(user_color);
        if(user_pass == true){
            //ユーザのターン
            turn_instance->userTurn(user_color);
        }
        else{
            printf("\n\n置けないのでパスします\n\n");
        }
        
    }

}
