//
//  PincerMovement.cpp
//  Osero
//
//  Created by 西村　宗高 on 2017/05/27.
//  Copyright © 2017年 西村　宗高. All rights reserved.
//

#include "PincerMovement.hpp"

int PincerMovement::checkOnPincerMovement(stone_status color,int location,Stone *table[]){
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
    }while(i <= 6);
    //最後まで挟めるものが見つからなかった場合
    return -1;
}

int PincerMovement::checkUnderPincerMovement(stone_status color,int location,Stone *table[]){
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
    }while(i <= 6);
    //最後まで挟めるものが見つからなかった場合
    return -1;
}

int PincerMovement::checkLeftPincerMovement(stone_status color,int location,Stone *table[]){
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
    }while(i <= 6);
    //最後まで挟めるものが見つからなかった場合
    return -1;
}

int PincerMovement::checkRightPincerMovement(stone_status color,int location,Stone *table[]){
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
    }while(i <= 6);
    //最後まで挟めるものが見つからなかった場合
    return -1;
}

int PincerMovement::checkLeftOnPincerMovement(stone_status color,int location,Stone *table[]){
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
    }while(i <= 6);
    //最後まで挟めるものが見つからなかった場合
    return -1;
}

int PincerMovement::checkRightOnPincerMovement(stone_status color,int location,Stone *table[]){
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
    }while(i <= 6);
    //最後まで挟めるものが見つからなかった場合
    return -1;
}

int PincerMovement::checkLeftUnderPincerMovement(stone_status color,int location,Stone *table[]){
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
    }while(i <= 6);
    //最後まで挟めるものが見つからなかった場合
    return -1;
}

int PincerMovement::checkRightUnderPincerMovement(stone_status color,int location,Stone *table[]){
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
    }while(i <= 6);
    //最後まで挟めるものが見つからなかった場合
    return -1;
}
