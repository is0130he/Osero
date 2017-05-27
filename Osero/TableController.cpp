//
//  TableController.cpp
//  Osero
//
//  Created by 西村　宗高 on 2017/05/27.
//  Copyright © 2017年 西村　宗高. All rights reserved.
//

#include "TableController.hpp"

/*
 *機能概要 : 上側のチェック
 *機能詳細 : 指定した座標の上側にテーブルがあるかチェック
 *@author : 西村宗高
 *@version : 1
 *@param : location(指定座標)
 *@return :true(テーブルがある),false(テーブルがない)
 */

bool TableController::checkOnPlace(int location){
    if((0<=location)&&(location<=8)){
        return false;
    }
    return true;
}

/*
 *機能概要 : 下側のチェック
 *機能詳細 : 指定した座標の下側にテーブルがあるかチェック
 *@author : 西村宗高
 *@version : 1
 *@param : location(指定座標)
 *@return :true(テーブルがある),false(テーブルがない)
 */
bool TableController::checkUnderPlace(int location){
    if((56<=location)&&(location<=63)){
        return false;
    }
    return true;
}

/*
 *機能概要 : 左側のチェック
 *機能詳細 : 指定した座標の左側にテーブルがあるかチェック
 *@author : 西村宗高
 *@version : 1
 *@param : location(指定座標)
 *@return :true(テーブルがある),false(テーブルがない)
 */
bool TableController::checkLeftPlace(int location){
    int check = location % 8;
    
    if(check == 0){
        return false;
    }
    return true;
}

/*
 *機能概要 : 右側のチェック
 *機能詳細 : 指定した座標の右側にテーブルがあるかチェック
 *@author : 西村宗高
 *@version : 1
 *@param : location(指定座標)
 *@return :true(テーブルがある),false(テーブルがない)
 */
bool TableController::checkRightPlace(int location){
    int check = location % 8;
    
    if(check == 7){
        return false;
    }
    return true;
}

/*
 *機能概要 : 左上側のチェック
 *機能詳細 : 指定した座標の左上側にテーブルがあるかチェック
 *@author : 西村宗高
 *@version : 1
 *@param : location(指定座標)
 *@return :true(テーブルがある),false(テーブルがない)
 */
bool TableController::checkLeftOnPlace(int location){
    bool check1 = checkLeftPlace(location);
    bool check2 = checkOnPlace(location);
    
    if(check1 && check2){
        return true;
    }
    
    return false;
}

/*
 *機能概要 : 右上側のチェック
 *機能詳細 : 指定した座標の右上側にテーブルがあるかチェック
 *@author : 西村宗高
 *@version : 1
 *@param : location(指定座標)
 *@return :true(テーブルがある),false(テーブルがない)
 */

bool TableController::checkRightOnPlace(int location){
    bool check1 = checkRightPlace(location);
    bool check2 = checkOnPlace(location);
    
    if(check1 && check2){
        return true;
    }
    
    return false;
}

/*
 *機能概要 : 左下側のチェック
 *機能詳細 : 指定した座標の左下側にテーブルがあるかチェック
 *@author : 西村宗高
 *@version : 1
 *@param : location(指定座標)
 *@return :true(テーブルがある),false(テーブルがない)
 */
bool TableController::checkLeftUnderPlace(int location){
    bool check1 = checkLeftPlace(location);
    bool check2 = checkUnderPlace(location);
    
    if(check1 && check2){
        return true;
    }
    
    return false;
}

/*
 *機能概要 : 右下側のチェック
 *機能詳細 : 指定した座標の右下側にテーブルがあるかチェック
 *@author : 西村宗高
 *@version : 1
 *@param : location(指定座標)
 *@return :true(テーブルがある),false(テーブルがない)
 */

bool TableController::checkRightUnderPlace(int location){
    bool check1 = checkRightPlace(location);
    bool check2 = checkUnderPlace(location);
    
    if(check1 && check2){
        return true;
    }
    
    return false;
}
