//
//  PincerMovement.cpp
//  Osero
//
//  Created by 西村　宗高 on 2017/05/27.
//  Copyright © 2017年 西村　宗高. All rights reserved.
//

#include "PincerMovement.hpp"
//テーブル情報
extern Stone *table[TABLE_SIZE];

void PincerMovement::checkAllPincerMovement(stone_status color,int location,int *check){
    *(check++) = checkOnPincerMovement(color, location);
    *(check++) = checkRightOnPincerMovement(color, location);
    *(check++) = checkRightPincerMovement(color, location);
    *(check++) = checkRightUnderPincerMovement(color, location);
    *(check++) = checkUnderPincerMovement(color, location);
    *(check++) = checkLeftUnderPincerMovement(color, location);
    *(check++) = checkLeftPincerMovement(color, location);
    *(check) = checkLeftOnPincerMovement(color, location);
}

int PincerMovement::checkOnPincerMovement(stone_status color,int location){
    //カウンタ変数
    int i=1;
    int place;
    //上に石があるかチェック
    bool place_check = this->checkOnPlace(location);
    if(place_check == true){
        //すぐ上に置くものと同じ色の石がある場合
        if(color == table[location + ON]->getStatus()){
            return -1;
        }
        //すぐ上には石がない場合
        else if(nothing == table[location + ON]->getStatus()){
            return -1;
        }
    }
    //(最大6つまで)2つ目以降、上に同じ色の石があるかチェック
    do{
        place_check = this->checkOnPlace(location);
        place = location + ON * (++i);
        if(place_check == true){
            //上に置くものと同じ色の石がある場合
            if(color == table[place]->getStatus()){
                return place;
            }
        }
    }while((i <= 6)||(nothing != table[place]->getStatus()));
    //最後まで挟めるものが見つからなかった場合
    return -1;
}

int PincerMovement::checkUnderPincerMovement(stone_status color,int location){
    //カウンタ変数
    int i=1;
    int place;
    //下に石があるかチェック
    bool place_check = this->checkUnderPlace(location);
    if(place_check == true){
        //すぐ下に置くものと同じ色の石がある場合
        if(color == table[location + UNDER]->getStatus()){
            return -1;
        }
        //すぐ下には石がない場合
        else if(nothing == table[location + UNDER]->getStatus()){
            return -1;
        }

    }
    //(最大6つまで)2つ目以降、下に同じ色の石があるかチェック
    do{
        place_check = this->checkUnderPlace(location);
        place = location + UNDER * (++i);
        if(place_check == true){
            //下に置くものと同じ色の石がある場合
            if(color == table[place]->getStatus()){
                return place;
            }
        }
    }while((i <= 6)||(nothing != table[place]->getStatus()));
    //最後まで挟めるものが見つからなかった場合
    return -1;
}

int PincerMovement::checkLeftPincerMovement(stone_status color,int location){
    //カウンタ変数
    int i=1;
    int place;
    //左に石があるかチェック
    bool place_check = this->checkLeftPlace(location);
    if(place_check == true){
        //すぐ左に置くものと同じ色の石がある場合
        if(color == table[location + LEFT]->getStatus()){
            return -1;
        }
        //すぐ左には石がない場合
        else if(nothing == table[location + LEFT]->getStatus()){
            return -1;
        }

    }
    //(最大6つまで)2つ目以降、左に同じ色の石があるかチェック
    do{
        place_check = this->checkLeftPlace(location);
        place = location + LEFT * (++i);
        if(place_check == true){
            //左に置くものと同じ色の石がある場合
            if(color == table[place]->getStatus()){
                return place;
            }
        }
    }while((i <= 6)||(nothing != table[place]->getStatus()));
    //最後まで挟めるものが見つからなかった場合
    return -1;
}

int PincerMovement::checkRightPincerMovement(stone_status color,int location){
    //カウンタ変数
    int i=1;
    int place;
    //右に石があるかチェック
    bool place_check = this->checkRightPlace(location);
    if(place_check == true){
        //すぐ右に置くものと同じ色の石がある場合
        if(color == table[location + RIGHT]->getStatus()){
            return -1;
        }
        //すぐ右には石がない場合
        else if(nothing == table[location + RIGHT]->getStatus()){
            return -1;
        }

    }
    //(最大6つまで)2つ目以降、右に同じ色の石があるかチェック
    do{
        place_check = this->checkRightPlace(location);
        place = location + RIGHT * (++i);
        if(place_check == true){
            //右に置くものと同じ色の石がある場合
            if(color == table[place]->getStatus()){
                return place;
            }
        }
    }while((i <= 6)||(nothing != table[place]->getStatus()));
    //最後まで挟めるものが見つからなかった場合
    return -1;
}

int PincerMovement::checkLeftOnPincerMovement(stone_status color,int location){
    //カウンタ変数
    int i=1;
    int place;
    //左上に石があるかチェック
    bool place_check = this->checkLeftOnPlace(location);
    if(place_check == true){
        //すぐ左上に置くものと同じ色の石がある場合
        if(color == table[location + LEFT_ON]->getStatus()){
            return -1;
        }
        //すぐ左上には石がない場合
        else if(nothing == table[location + LEFT_ON]->getStatus()){
            return -1;
        }

    }
    //(最大6つまで)2つ目以降、左上に同じ色の石があるかチェック
    do{
        place_check = this->checkLeftOnPlace(location);
        place = location + LEFT_ON * (++i);
        if(place_check == true){
            //左上に置くものと同じ色の石がある場合
            if(color == table[place]->getStatus()){
                return place;
            }
        }
    }while((i <= 6)||(nothing != table[place]->getStatus()));
    //最後まで挟めるものが見つからなかった場合
    return -1;
}

int PincerMovement::checkRightOnPincerMovement(stone_status color,int location){
    //カウンタ変数
    int i=1;
    int place;
    //右上に石があるかチェック
    bool place_check = this->checkRightOnPlace(location);
    if(place_check == true){
        //すぐ右上に置くものと同じ色の石がある場合
        if(color == table[location + RIGHT_ON]->getStatus()){
            return -1;
        }
        //すぐ右上には石がない場合
        else if(nothing == table[location + RIGHT_ON]->getStatus()){
            return -1;
        }

    }
    //(最大6つまで)2つ目以降、右上に同じ色の石があるかチェック
    do{
        place_check = this->checkRightOnPlace(location);
        place = location + RIGHT_ON * (i++);
        if(place_check == true){
            //右上に置くものと同じ色の石がある場合
            if(color == table[place]->getStatus()){
                return place;
            }
        }
    }while((i <= 6)||(nothing != table[place]->getStatus()));
    //最後まで挟めるものが見つからなかった場合
    return -1;
}

int PincerMovement::checkLeftUnderPincerMovement(stone_status color,int location){
    //カウンタ変数
    int i=1;
    int place;
    //左下に石があるかチェック
    bool place_check = this->checkLeftUnderPlace(location);
    if(place_check == true){
        //すぐ左下に置くものと同じ色の石がある場合
        if(color == table[location + LEFT_UNDER]->getStatus()){
            return -1;
        }
        //すぐ左下には石がない場合
        else if(nothing == table[location + LEFT_UNDER]->getStatus()){
            return -1;
        }

    }
    //(最大6つまで)2つ目以降、左下に同じ色の石があるかチェック
    do{
        place_check = this->checkLeftUnderPlace(location);
        place = location + LEFT_UNDER * (++i);
        if(place_check == true){
            //左下に置くものと同じ色の石がある場合
            if(color == table[place]->getStatus()){
                return place;
            }
        }
    }while((i <= 6)||(nothing != table[place]->getStatus()));
    //最後まで挟めるものが見つからなかった場合
    return -1;
}

int PincerMovement::checkRightUnderPincerMovement(stone_status color,int location){
    //カウンタ変数
    int i=1;
    int place;
    //右下に石があるかチェック
    bool place_check = this->checkRightUnderPlace(location);
    if(place_check == true){
        //すぐ右下に置くものと同じ色の石がある場合
        if(color == table[location + RIGHT_UNDER]->getStatus()){
            return -1;
        }
        //すぐ右下には石がない場合
        else if(nothing == table[location + RIGHT_UNDER]->getStatus()){
            return -1;
        }

    }
    //(最大6つまで)2つ目以降、右下に同じ色の石があるかチェック
    do{
        place_check = this->checkRightUnderPlace(location);
        place = location + RIGHT_UNDER * (++i);
        if(place_check == true){
            //右下に置くものと同じ色の石がある場合
            if(color == table[place]->getStatus()){
                return place;
            }
        }
    }while((i <= 6)||(nothing != table[place]->getStatus()));
    //最後まで挟めるものが見つからなかった場合
    return -1;
}

//石を挟む
void PincerMovement::changePincerMovement(int direction,stone_status color, int location,int pair_location){
    //挟んだ色に変更
    for(;location != pair_location; location += direction){
        table[location]->setStatus(color);
    }
}

void PincerMovement::updatePinceredTable(stone_status color, int location,int *check){
    //上から順に時計回りで更新
    int place;
    //インスタンス生成
    PincerMovement *pincer_instance;
    pincer_instance = new PincerMovement();
    
    //上
    place = pincer_instance->checkOnPincerMovement(color, location);
    pincer_instance->changePincerMovement(ON, color, location, place);
    //右上
    place = pincer_instance->checkRightOnPincerMovement(color, location);
    pincer_instance->changePincerMovement(RIGHT_ON, color, location, place);
    //右
    place = pincer_instance->checkRightPincerMovement(color, location);
    pincer_instance->changePincerMovement(RIGHT, color, location, place);
    //右下
    place = pincer_instance->checkRightUnderPincerMovement(color, location);
    pincer_instance->changePincerMovement(RIGHT_UNDER, color, location, place);
    //下
    place = pincer_instance->checkUnderPincerMovement(color, location);
    pincer_instance->changePincerMovement(UNDER, color, location, place);
    //左下
    place = pincer_instance->checkLeftUnderPincerMovement(color, location);
    pincer_instance->changePincerMovement(LEFT_UNDER, color, location, place);
    //左
    place = pincer_instance->checkLeftPincerMovement(color, location);
    pincer_instance->changePincerMovement(LEFT, color, location, place);
    //左上
    place = pincer_instance->checkLeftOnPincerMovement(color, location);
    pincer_instance->changePincerMovement(LEFT_ON, color, location, place);
    
}
